/**
 *main - ;program to print digit combinations'
 *
 *Return: 0 if successful
 */
#include<stdio.h>
int main(void)
{
	int	i;
	int	j;
	for(i='0';i<='9';i++)
      {
      for(j='0';j<='9';j++)
	{
	  if((i==j)||(j=='0'))
	  continue;
	  
	if (!(i > j || i == j)){
	    putchar(i);
	    putchar(j);
	    if (i == '8' && j == '9')
	      putchar('\n');
	    else{
	    putchar(',');
	    putchar(' ');
	    }
	    }
	}/*end or j
	  */
      }/*end i*/
 
    return (0);
}
