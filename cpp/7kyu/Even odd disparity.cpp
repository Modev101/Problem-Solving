#include <string>
#include <vector>
#include <cctype> 

int solve(const std::vector<std::string>& v) {
    int evens = 0;
    int odds = 0;

    for (int i = 0; i < v.size(); i++) {
        if (std::isdigit(v[i][0])) {  
            int num = std::stoi(v[i]);
            if (num % 2 == 0) {
                evens++;
            } else {
                odds++;
            }
        }
    }
    return evens - odds;
}