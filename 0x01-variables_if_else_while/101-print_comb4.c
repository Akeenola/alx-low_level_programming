/**
 *main-'print 3 digits
 *
 *Return: 0 when successful
*/
#include<stdio.h>
int main(void)
{
  int i;
  int j;
  int k;
  for( i='0';i<='9';i++)
    {
      for(j='0';j<='9';j++)
	{
	  for(k='0';k<='9';k++)
	    {

	    if(!((i==j)&& (j==k))||((i>j)&&(j>k)))
		{
		  putchar(i);
		  putchar(j);
		  putchar(k);

		  if((i==7)&&(j==8)&&(k==9))
		  {
		    putchar('\n');
		    
		  }/*end if*/
		  else
		    {
		    putchar(',');
		    putchar(' ');
		   }/*end else*/
	    }/*end if*/
	      
				    	}
    }/* end for k*/
}/*end for j*/
  return (0);
}/*end main*/
