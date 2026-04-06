#include <vector>
#include <string>

std::vector<int> digitize(int n) {
    std::string s = std::to_string(n);
    std::vector<int> result;
    for (char c : s) {
        result.push_back(c - '0'); 
    }
    return result;
}