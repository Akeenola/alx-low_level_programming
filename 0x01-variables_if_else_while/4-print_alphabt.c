/**
 *main- 'print letters except q and e'
 *
 *Return: 0 on success
 */
#include<stdio.h>
int main(void)
{
	char letter	=	'a';
	while	(letter	<=	'z')
	{
		if	(letter	!=	'e'	&&	letter	!=	'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return	(0);
}
