#include"main.h"
int	print_last_digit(int	a)
{
	if	(a	<	0)
		a	=	-1	*	a;
	a	=	a	%	10;
	_putchar(a);
	return	(a);
}
