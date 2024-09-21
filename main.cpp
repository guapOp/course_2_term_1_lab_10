#include <iostream>
#include <string>
#include "finder.h"

using namespace std;

int main() {
    string str;
    cout << "enter string: " << endl;
    getline(cin, str);

    Finder finder;

    Finder::CountResult result = finder.count(str);

    cout << "chars count: " << result.chars_count << endl;
    cout << "words count: " << result.words_count << endl;


    return 0;
}
