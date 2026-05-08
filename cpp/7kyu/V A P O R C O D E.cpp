#include <string>
#include <cctype>

std::string vaporcode(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c != ' ') {
            if (!result.empty()) result += "  ";  
            result += std::toupper(static_cast<unsigned char>(c));
        }
    }
    return result;
}