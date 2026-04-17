#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int result = 0 ;
  for ( int i = 0 ; i < arr.size() ; i++)
    {
    if (arr[i])
      {
      result++ ;
      }
    
    }
  return result ;
}