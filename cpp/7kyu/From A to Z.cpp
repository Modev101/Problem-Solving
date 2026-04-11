#include <string>

std::string gimme_the_letters(const std::string& sp)
{
  std::string result ; 
  for(char c = sp.front() ; c <= sp.back() ; c++)
  {
    result += c ;
  }  
  return result ;
}