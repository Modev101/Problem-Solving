#include <string>
#include <cctype> 

bool is_uppercase(const std::string &s) {
    for (char c : s) {
        if (std::isalpha(c) && !std::isupper(c)) {
            return false; 
        }
    }
    return true; 
}