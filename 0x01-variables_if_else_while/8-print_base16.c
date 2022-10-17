/**
 *main-'print hexadecimal in lower case'
 *
 *Return: 0 when successful
 */
#include<stdio.h>
int	main(void)
{
	char l;
	l	=	'0';
	while	(l	<=	'9')
	{
		putchar(l);
		l++;
	}
	l	=	'a';
	while	(l	<=	'f')
	{
		putchar(l);
		l++;
	}
	return	(0);
}
