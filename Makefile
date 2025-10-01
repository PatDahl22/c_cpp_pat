# Generic Makefile for C and C++ projects

# Compiler settings
CC = gcc
CXX = g++
CFLAGS = -Wall -Wextra -Iinclude
CXXFLAGS = -Wall -Wextra -Iinclude
LDFLAGS = 

# Directories
SRC_DIR = src
OBJ_DIR = build
BIN_DIR = bin

# Source files
C_SRCS := $(wildcard $(SRC_DIR)/**/*.c)
CPP_SRCS := $(wildcard $(SRC_DIR)/**/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(C_SRCS)) \
         $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(CPP_SRCS))

# Output binary
TARGET = $(BIN_DIR)/main

.PHONY: all clean

all: $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(LDFLAGS) $^ -o $@

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)
