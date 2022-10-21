#include"main.h"
/**
 * _isdigit - check digit
 *
 * @c - parameter
 *Return 0 - if otherwise
 *
 *Return 1 - if digits
*/
int	_isdigit(int	c)
{
	if	(c	>=	48	&&	c	<=	57)
	{
		return (1);
	}
	else
		return (0);
}
