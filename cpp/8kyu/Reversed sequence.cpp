#include <vector>

std::vector<int> reverseSeq(int n) { 
  std::vector<int> result ;
  for(int i = n ; i >= 1 ; i--)
    {
    result.push_back(i) ;
    }
    return result;
}