#include <vector>

int elementsSum(const std::vector<std::vector<int>>& arr, int defaultValue = 0) {
    int n = arr.size();
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        int index = n - i;  
        if (index <= arr[i].size()) {
            sum += arr[i][index - 1]; 
        } else {
            sum += defaultValue; 
        }
    }
    
    return sum;
}