/**
*main - 'the main's description
*Return: 0(successful)
*/
#include<stdio.h>
#include<stdlib.h>
int	main(void)
{
int	n;
n	=	rand()%99;
if	(n	>	0)
    printf("%d is  positive",	n);
else	if	(n	==	0)
    printf("%d is zero",	n);
else
    printf("%d is negative",	n);
 return	(0);
}
