#include <vector>

double calcAverage(const std::vector<int>& values) {
    if (values.empty()) return 0; 
    
    int sum = 0;
    for (int i = 0; i < values.size(); i++) {
        sum += values[i]; 
    }

    return static_cast<double>(sum) / values.size(); 
}