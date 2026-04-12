#include <vector>
#include <algorithm>

std::vector<unsigned int> removeSmallest(const std::vector<unsigned int>& numbers) {
    if (numbers.empty()) return {};

    
    auto it = std::min_element(numbers.begin(), numbers.end());


    auto pos = std::find(numbers.begin(), numbers.end(), *it);

    
    std::vector<unsigned int> result;
    result.reserve(numbers.size() - 1);
    for (auto itr = numbers.begin(); itr != numbers.end(); ++itr) {
        if (itr == pos) continue;
        result.push_back(*itr);
    }
    return result;
}