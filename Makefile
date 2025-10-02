# Kompilatorer
CC      = gcc
CXX     = g++

# Standarder & varningar
CSTD    = -std=c11
CXXSTD  = -std=c++17
WARN    = -Wall -Wextra -Wpedantic
INCLUDE = -Iinclude

# Debug/Release (byt till RELEASE=1 för optimerad build)
ifeq ($(RELEASE),1)
  CFLAGS   = $(CSTD)   $(WARN) $(INCLUDE) -O2 -DNDEBUG
  CXXFLAGS = $(CXXSTD) $(WARN) $(INCLUDE) -O2 -DNDEBUG
else
  CFLAGS   = $(CSTD)   $(WARN) $(INCLUDE) -O0 -g
  CXXFLAGS = $(CXXSTD) $(WARN) $(INCLUDE) -O0 -g
  # Valfritt (GCC/Clang): aktivera sanering vid debug
  # CFLAGS   += -fsanitize=address,undefined
  # CXXFLAGS += -fsanitize=address,undefined
  # LDFLAGS  += -fsanitize=address,undefined
endif

# Auto-hitta källor rekursivt
C_SOURCES   := $(shell find src -name '*.c')
CPP_SOURCES := $(shell find src -name '*.cpp')

# Mappa källor -> objekt i build/
C_OBJECTS    := $(patsubst src/%.c,build/%.c.o,$(C_SOURCES))
CPP_OBJECTS  := $(patsubst src/%.cpp,build/%.cpp.o,$(CPP_SOURCES))
OBJECTS      := $(C_OBJECTS) $(CPP_OBJECTS)

# Auto-genererade header-beroenden
DEP_FILES := $(OBJECTS:.o=.d)

# Binär
BIN = bin/app

.PHONY: all run clean tree

all: $(BIN)

$(BIN): $(OBJECTS)
	@mkdir -p $(dir $@)
	$(CXX) $(OBJECTS) -o $@ $(LDFLAGS)

# build-file samla in alla .o och .d filer i build/
# C: bygg + depfile (-MMD -MP)
build/%.c.o: src/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

# C++: bygg + depfile
build/%.cpp.o: src/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

# Inkludera dep-filer (gör att ändringar i headers triggar ombyggnad)
-include $(DEP_FILES)

run: all
	./$(BIN)

clean:
	rm -rf build bin

# Praktiskt: visa hur Make tycker filträdet ser ut
tree:
	@echo "C_SOURCES:"; echo "$(C_SOURCES)" | tr ' ' '\n'
	@echo "CPP_SOURCES:"; echo "$(CPP_SOURCES)" | tr ' ' '\n'
	@echo "OBJECTS:"; echo "$(OBJECTS)" | tr ' ' '\n'

