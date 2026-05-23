#include <vector>
#include <algorithm>

std::vector<int> flip(const char dir, std::vector<int> arr) {
    if (dir == 'R') {
        std::sort(arr.begin(), arr.end());  
    } 
    else if (dir == 'L') {
        std::sort(arr.rbegin(), arr.rend()); 
    }
    return arr;
}