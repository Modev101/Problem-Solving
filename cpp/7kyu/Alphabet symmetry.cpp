#include <vector>
#include <string>
#include <cctype>

std::vector<int> solve(const std::vector<std::string>& arr) {
    std::vector<int> result;

    for (const auto& str : arr) {
        int count = 0;
        for (int i = 0; i < str.size(); i++) {
            char c = std::tolower(static_cast<unsigned char>(str[i]));
            if (c - 'a' == i) { 
                count++;
            }
        }
        result.push_back(count);
    }

    return result;
}