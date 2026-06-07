#include <vector>

std::vector<int> pipe_fix(const std::vector<int>& nums) {
    std::vector<int> result;
    if (nums.empty()) return result;

    int start = nums.front();   
    int end   = nums.back();    

    for (int i = start; i <= end; i++) {
        result.push_back(i);
    }
    return result;
}