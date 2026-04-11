#include <string>

std::string get_middle(const std::string& str) {
    int n = str.size();
    if (n % 2 == 0) {

        return str.substr(n / 2 - 1, 2);
    } else {
       
        return str.substr(n / 2, 1);
    }
}