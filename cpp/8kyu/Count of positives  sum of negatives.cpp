#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  int result = 0 ;
  int sum = 0 ;
   if (input.empty()) return {}  ;
   for (int i = 0 ; i < input.size() ; i++)
  {
    if ( input[i] > 0 )
      {
       result++ ;
      }
    else if ( input[i] < 0)
      {
      sum += input[i] ;
      }
  }
    
return {result, sum} ;
}