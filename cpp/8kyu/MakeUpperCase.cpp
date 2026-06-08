#include <string>

std::string makeUpperCase (const std::string& input_str)
{
  std::string result = "" ;
  for ( int i = 0 ; i < input_str.length() ; i++ )
  {
   result += toupper(input_str[i]) ;
  }
  return result ; 
}