#include <vector>
#include <string>

using namespace std ;

vector<string> string_to_array(const string& str) {
    istringstream iss(str);
     if (str.empty()) {
        return {""}; 
    }
    return {istream_iterator<string>(iss), istream_iterator<string>()};
}