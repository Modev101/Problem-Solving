#include <string>
#include <sstream>

std::string find_screen_height(int width, const std::string& ratio) {
    int rw, rh;  
    char colon;
    std::stringstream ss(ratio);
    ss >> rw >> colon >> rh;

    int height = (width * rh) / rw;  

    return std::to_string(width) + "x" + std::to_string(height);
}