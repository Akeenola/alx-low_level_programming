#include"main.h"
/**
 *print_diagonal - method
 *@n - parameter
 */
void	print_diagonal(int n)
{
	int	i;
	int	j;
	j	=	0;
	if	(n	<=	0)
		_putchar('\n');
	for	(i	=	1;	i	<=	n;	i++)
	{
	  j	=	i;
		while	(j	>=	1)
		{
			putchar(' ');
			j--;
		}
	_putchar('\\');
	_putchar('\n');
}
}
