#include <string>
using namespace std;

string replace(const string &s) {
    string result = s; 
    for (char &c : result) {
        if (c == 'a' || c == 'e' || c == 'i' || 
            c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || 
            c == 'O' || c == 'U') {
            c = '!'; 
        }
    }
    return result;
}