#include <string>
#include <algorithm>
#include <cctype>

bool isPalindrom(const std::string& str)
{
    std::string lower = str;
    std::transform(lower.begin(), lower.end(), lower.begin(),
                   [](unsigned char c){ return std::tolower(c); }); 
      

    std::string reversed = lower;
    std::reverse(reversed.begin(), reversed.end());

    return reversed == lower;
}