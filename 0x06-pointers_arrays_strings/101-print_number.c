#include"main.h"
#include<string.h>
void print_number(int n)
{
  int i;
  int j;
  int k;
  char str[10];
  k =0;
  if(n==0)
    _putchar(n+'0');
  else if(n>=1)
    {
  while(n)
    {
      i=n/10;
      j=n%10;
      n=i;
      str[k]=j+'0';    
      /*      _putchar(j+'0');*/
      k++;
    }
  for(k=9;k>=0;k--)
    _putchar(str[k]);
    }
  else
    {
      _putchar('-');
      n=-1*n;
      while(n)
	
	{
	  
	  i=n/10;
	  
	  j=n%10;
	  
	  n=i;
	  
	  str[k]=j+'0';
	  
	  /*      _putchar(j+'0');*/
	  
	  k++;
	  
	}
      
      for(k=9;k>=0;k--)
	
	_putchar(str[k]);

    }
    }
