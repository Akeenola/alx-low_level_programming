/**
 *main - ;program to print digit combinations'
 *
 *Return: 0 if successful
 */
#include<stdio.h>
int main(void)
{
  int i;
  int j;
  int c;
    for(i='0';i<='9';i++)
      {
	c++;
      for(j='0';j<='9';j++)
	{
	  if((i==j)||(j=='0'))
	  continue;
	  
	if (!(i > j || i == j)){
	    putchar(i);
	    putchar(j);
	    putchar(',');
	    putchar(' ');
	  }
	}/*end or j
	  */
      }/*end i*/
 
    return (0);
}
