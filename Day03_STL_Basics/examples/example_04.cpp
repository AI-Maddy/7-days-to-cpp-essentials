#include <iostream>
#include <map>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    stringstream ss(line);
    map<string, int> freq;
    string word;

    while (ss >> word) {
        ++freq[word];
    }

    for (const auto &pair : freq) {
        cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
