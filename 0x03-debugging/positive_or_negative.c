/**
 *positive_or_negative : funcction definition
 *
 *n is a parameter
 */
#include<stdio.h>
#include"main.h"
void	positive_or_negative(int	n)
{
	if	(n	>	0)
		printf("%d is positive\n",	n	%	100);
	else	if	(n	==	0)
		printf("%d is zero\n",	n);
	else	if	(n	<	0)
		printf("%d is negative\n",	n	%	100);
}
