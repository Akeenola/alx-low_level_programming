/**
*main- 'print the alphabet'
*
*Return: 0 successfully
*/
#include	<stdio.h>
int	main(void)
{
	char	alpha	=	'a';
	while	(alpha	<=	'z')
	{
		putchar(alpha);
		alpha++;
}
	putchar('\n');
	return (0);
}
