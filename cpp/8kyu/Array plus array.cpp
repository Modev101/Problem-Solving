#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
 int sum = 0 ;
 for( int num : a)  sum += num ;
 for( int num : b)  sum += num ;
  return sum ; 
}