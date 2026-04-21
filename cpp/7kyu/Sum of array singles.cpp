#include <vector>
#include <algorithm>
int repeats(std::vector<int>v){
  int result  = 0 ;
  for (int num : v)
    {
    if (count(v.begin(), v.end(), num) == 1)
      {
      result += num ;
      }
    }
  
  return result ;
}