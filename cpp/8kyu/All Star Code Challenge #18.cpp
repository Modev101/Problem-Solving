#include <string>

unsigned int strCount(const std::string& word, char letter){
int result = 0 ; 
  for ( int i = 0 ; i < word.size() ; i++ )
    {
    if (word[i] == letter)
      {
      result++ ;
      }
     }
  return result ;
    
}