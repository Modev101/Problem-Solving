#include <cmath>

bool is_even(double n) {
    return floor(n) == n && static_cast<long long>(n) % 2 == 0;
}