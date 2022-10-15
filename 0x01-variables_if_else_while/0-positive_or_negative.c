/**
*main - 'the main's description
*Return: 0(successful)
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int	main(void)
{
int	n;
/*int	min	=	-99;
int	max	=	99;
*/
srand( time(0));
n	=rand()-RAND_MAX/2;
if	(n	>	0)
    printf("%d is  positive",	n);
else	if	(n	==	0)
    printf("%d is zero",	n);
else
    printf("%d is negative",	n);
 return	(0);
}
