#include"main.h"
#include<stdio.h>

/**
 *print_array - function name
 *
 * @a : pointer to array
 *
 * @n : parameter
 */
void	print_array(int	*a,	int	n)
{
	int	i;
	for	(i	=	0;	i	<	n;	i++)
	{
		if	(i	!=	(n	-	1))
			printf("%d, ",	a[i]);
		else
			printf("%d",	a[i]);
	}
	putchar('\n');
}
