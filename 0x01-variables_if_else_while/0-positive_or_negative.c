/**
*main - 'the main's description
*Return: 0(successful)
*/
#include<stdio.h>
#include<stdlib.h>
int	main(void)
{
int	num;
num	=	rand();
if	(num	>	0)
    printf("%d is  positive",	num);
else	if	(num	==	0)
    printf("%d is zero",	num);
else
    printf("%d is negative",	num);
 return	(0);
}
