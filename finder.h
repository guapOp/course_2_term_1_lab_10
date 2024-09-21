#ifndef CODE_FINDER_H
#define CODE_FINDER_H

#include <string>

using namespace std;

class Finder {
public:
    struct CountResult {
        int chars_count;
        int words_count;
    };

    CountResult count(const string& str);
};

#endif // CODE_FINDER_H
