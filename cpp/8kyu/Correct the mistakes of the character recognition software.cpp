#include <string>

std::string correct(std::string str){
      for (char &c : str) {
        if (c == '5') c = 'S';
        else if (c == '0') c = 'O';
        else if (c == '1') c = 'I';
    }
    return str;
}