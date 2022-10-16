/** 
*main-'main function
*return::return 0 successful
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
int n;
 char is[]=	"is";
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%s %d %s %d and %s ",	"last digit of",	n,	is,	n % 10,	is);
if (n % 10 > 5)
{
	printf("greater than 5\n");
}
 
 else if (n % 10 == 0)
   
   {
     
     printf("0\n");
     
   }
 
 else
   
   {
     
     printf("less than 6 and not 0\n");
     
   }
 
 return (0);


}
