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
srand(time(0));
n	=	rand() -   RAND_MAX / 2;
if	(n	>	0)
    printf("%d is positive\n",	n%100);
else	if	(n	==	0)
    printf("%d is zero\n",	n);
 else	if	(n	<	0)
    printf("%d is negative\n",	n%100);
 return	(0);
}
