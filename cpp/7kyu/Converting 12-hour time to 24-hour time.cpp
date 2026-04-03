#include <string>
#include <sstream>
#include <iomanip>
#include <algorithm>

std::string to24HourTime(int hour, int minute, const std::string& period) {
    std::string p = period;
    std::transform(p.begin(), p.end(), p.begin(), ::tolower);

    if (p == "am") {
        if (hour == 12) hour = 0;
    } else { 
        if (hour != 12) hour += 12;
    }

    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << hour
        << std::setw(2) << std::setfill('0') << minute;

    return oss.str();
}