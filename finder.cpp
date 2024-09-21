#include "finder.h"
#include <string>
#include <sstream>

using namespace std;

Finder::CountResult Finder::count(const string& str) {
    CountResult result = {0, 0};

    for (char ch : str) {
        if (static_cast<int>(ch) < 120) {
            result.chars_count++;
        }
    }

    istringstream iss(str);
    string word;
    while (iss >> word) {
        if (word == "hello") {
            result.words_count++;
        }
    }

    return result;
}
