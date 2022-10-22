#include <stdio.h>
/**
 * main - program to print largest prime factor
 *
 * Return - 0 on successful
 */
int	main(void)
{
	int	n;
	int	i;
	int	highest;
	highest	=	2;
	printf("Enter the number you want: ");
	scanf("%d",	&n);
	for	(i	=	2;	i	*	i	<=	n;	i++)
	{
		while	(n	%	i	==	0)
		{
			highest	=	i;
			n	=	n	/	i;
		}
	}
	if	(n	!=	1)
	{
		highest	=	n;
	}
	printf("%d",	highest);
	return (0);
}
