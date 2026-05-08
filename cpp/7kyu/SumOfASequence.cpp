#include <cstdint>

long long sequenceSum(int begin, int end, int step) {
    if (begin > end) return 0;

    
    int last = begin + ((end - begin) / step) * step;

    
    long long n = ((long long)last - begin) / step + 1;

    
    return n * (begin + last) / 2;
}