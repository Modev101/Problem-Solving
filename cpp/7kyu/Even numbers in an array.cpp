#include <vector>

std::vector<int> evenNumbers(std::vector<int> arr, int n) {
    std::vector<int> result;

    
    for (int i = arr.size() - 1; i >= 0 && result.size() < n; --i) {
        if (arr[i] % 2 == 0) {
            result.insert(result.begin(), arr[i]); 
        }
    }
    return result;
}