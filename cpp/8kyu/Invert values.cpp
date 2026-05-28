#include <vector>

std::vector<int> invert(std::vector<int> values)
{
       for (int &num : values) 
       {
        num = -num;
       }
    return values;
}