#include"main.h"
/**
 * print_triangle : function name
 *
 * @size- parameter
 */
void	print_triangle(int	size)
{
	int	i;
	int	k;
	int	j;
	j	=	0;
	if	(size	<=	0)
	_putchar('\n');
	for	(i	=	1;	i	<=	size;	i++)
	{
		j	=	i;
		for	(k	=	0;	k	<	size	-	j;	k++)
			_putchar(' ');
		while	(j	>=	1)
		{
			putchar('#');
			j--;
		}
		_putchar('\n');
	}
}
