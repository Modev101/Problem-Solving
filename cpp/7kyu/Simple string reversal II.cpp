#include <string>
#include <algorithm>

std::string solve(const std::string& str, int a, int b) {
   
    if (b >= (int)str.size()) {
        b = str.size() - 1;
    }

    std::string result = str;
    std::reverse(result.begin() + a, result.begin() + b + 1);

    return result;
}