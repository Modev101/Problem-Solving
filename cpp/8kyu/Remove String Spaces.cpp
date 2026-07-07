#include <string>

std::string no_space(const std::string& x)
{
    std::string result;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] != ' ')  // skip spaces
        {
            result += x[i];
        }
    }
    return result;
}