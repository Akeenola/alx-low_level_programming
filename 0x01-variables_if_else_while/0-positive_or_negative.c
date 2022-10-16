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
int	min	=	-100;
int	max	=	100;
srand(time(0));
 n	=	(rand()	%	(max	-	min	+	1))	+	min;
if	(n	>	0)
    printf("%d is  positive",	n);
else	if	(n	==	0)
    printf("%d is zero",	n);
else
    printf("%d is negative",	n);
 return	(0);
}
