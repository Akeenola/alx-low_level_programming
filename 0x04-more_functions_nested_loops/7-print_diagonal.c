#include"main.h"
/**
 *print_diagonal - method
 *@n - parameter
 */
void	print_diagonal(int n)
{
	int	i	=	0;
	if	(n	<=	0)
		_putchar('\n');
	for	(i	=	0;	i	<	n;	i++)
		putchar('\\');
	_putchar('\n');
}
