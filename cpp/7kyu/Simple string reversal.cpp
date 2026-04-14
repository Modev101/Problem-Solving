#include <string>
#include <algorithm>
std::string solve(const std::string& str) {
    std::string res = str, letters; 
    for (char c : str) if (c!=' ') letters+=c;
    std::reverse(letters.begin(), letters.end());
    for (int i=0,j=0;i<res.size();i++) if (res[i]!=' ') res[i]=letters[j++];
    return res;
}