#include <string>
#include <algorithm>
long long reverseNumber(long long n) {
    std::string result = std::to_string(n) ;
    (result[0] == '-') ?  std::reverse(result.begin() +  1, result.end()) :
    std::reverse(result.begin(), result.end());
    return std::stoi(result) ;
}