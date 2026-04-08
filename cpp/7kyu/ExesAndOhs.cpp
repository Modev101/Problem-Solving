#include <string>
#include <cctype>

bool XO(const std::string& str) {
    int xCount = 0, oCount = 0;
    for (char c : str) {
        char lower = std::tolower(static_cast<unsigned char>(c));
        if (lower == 'x') xCount++;
        else if (lower == 'o') oCount++;
    }
    return xCount == oCount;
}