#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>     // for std::tolower
#include "if/if7_string.h"

using namespace std;

// bool funktion för att kolla om ett land finns i en region
bool in_region(const string& country, const vector<string>& region) {
    return find(region.begin(), region.end(), country) != region.end();
}

void if7_string()
{
    // Regioner
    vector<string> european    = {"albania", "bosnia", "croatia", "greece", "italy", "montenegro", "serbia", "slovenia", "bulgaria", "romania", "hungary", "austria", "czechia", "slovakia", "poland", "germany", "france", "spain", "portugal", "uk", "belgium", "netherlands", "luxembourg"};
    vector<string> nordic      = {"finland", "iceland", "sweden", "denmark", "norway"};
    vector<string> asia        = {"japan", "china", "thailand", "india", "vietnam", "malaysia", "indonesia", "philippines", "south korea", "north korea", "mongolia", "nepal", "bhutan", "bangladesh", "sri lanka", "cambodia", "laos", "myanmar", "afghanistan", "pakistan", "turkey", "georgia", "armenia", "azerbaijan", "russia"};

    // Input
    cout << "Enter your country: ";
    string country;
    cin >> country;

    // gör lowercase
    transform(country.begin(), country.end(), country.begin(),
              [](unsigned char c){ return tolower(c); });

    // Kolla region
    if (in_region(country, european)) {
        cout << "You live in " << country << " and " << country << " is in Europe." << endl;
    }
    else if (in_region(country, nordic)) {
        cout << "You live in " << country << " and " << country << " is in the Nordic countries." << endl;
    }
    else if (in_region(country, asia)) {
        cout << "You live in " << country << " and " << country << " is in Asia." << endl;
    }
    else {
        cout << "You live in " << country << " and " << country << " is not in Europe or Asia." << endl;
    }
}
