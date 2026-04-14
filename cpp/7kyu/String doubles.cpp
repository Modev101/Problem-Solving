#include <string>

std::string doubles(const std::string& s) {
    std::string result;
    for (char c : s) {
        if (!result.empty() && result.back() == c) {
            result.pop_back();  
        } else {
            result.push_back(c); 
        }
    }
    return result;
}