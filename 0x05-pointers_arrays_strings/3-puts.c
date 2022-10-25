#include"main.h"
#include<string.h>
/**
 * _puts - function name
 *
 * @str : parameter
 */
void	_puts(char	*str)
{
	int	n	=	strlen(str);
	int	i;
	for	(i	=	0;	i	<	n;	i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
