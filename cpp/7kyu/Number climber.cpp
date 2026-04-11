#include <vector>
std::vector<int> climb(int n)
{
  std::vector<int> result ;
  while(n > 1)
    {
    result.insert(result.begin(), n) ;
    n /= 2 ;  
    }
    result.insert(result.begin(), n) ;
    return result;
}