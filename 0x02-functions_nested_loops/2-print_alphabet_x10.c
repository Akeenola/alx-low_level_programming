/**
 *print_alphabet_x10
 *
 */
#include"main.h"
void	print_alphabet_x10(void)
{
	char	letters[]	=	"abcdefghijlmnopqrstuvwxyz";
	int	i;
	int	j;
	for	(i	=	0;	i	<	10;	i++)
	{
		for	(j	=	0;	j	<	26;	j++)
		{
			_putchar(letters[j]);
		}
	_putchar('\n');
	}
}
