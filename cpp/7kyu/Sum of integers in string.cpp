#include <string>
#include <cctype>  
#include <cstdlib> 

int sumOfIntegers(const std::string& str) {
    int sum = 0;
    std::string number;
    
    for (char c : str) {
        if (isdigit(c)) {
            number += c;   
        } else {
            if (!number.empty()) {
                sum += std::stoi(number);
                number.clear();
            }
        }
    }
    
    if (!number.empty()) {
        sum += std::stoi(number);
    }
    
    return sum;
}
