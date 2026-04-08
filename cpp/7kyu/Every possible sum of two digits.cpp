#include <vector>
#include <string>
using namespace std;

vector<int> digits(int n) {
    string str = to_string(n);
    vector<int> result;

    for (int i = 0; i < str.size(); i++) {
        for (int j = i + 1; j < str.size(); j++) {
            int a = str[i] - '0';
            int b = str[j] - '0';
            result.push_back(a + b);
        }
    }

    return result;
}

