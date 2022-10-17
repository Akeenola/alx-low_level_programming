/**
 *main-'print letters in reverse order'
 *
 *Return: 0 when successful
 */
#include<stdio.h>
int	main(void)
{
	char	letter;
	letter	=	'z';
	while	(letter	>=	'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return	(0);
}
