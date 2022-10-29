#include"main.h"
void rev_string(char *s)
  
{
  
  int len, n;
  
  char *begin, *end, tmp;
  

  
  len =strlen(s);
  

  
  begin = s;
  
  end = s;
  

  
  for ( n = 0 ; n < ( len - 1 ) ; c++ )
    
    end++;
  

  
  for ( n = 0 ; n < len/2 ; c++ )
    
    {
      
      tmp = *end;
      
      *end = *begin;
      
      *begin = tmp;
      

      
      begin++;
      
      end--;
      
    }
  
}
