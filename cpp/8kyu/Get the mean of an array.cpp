#include <vector>

int get_average(std::vector <int> marks)
{
  int result = 0 ;
  for (int i = 0 ; i < marks.size() ;i++)
    {
    result += marks.at(i) ;  
    }
  return result / marks.size();
}