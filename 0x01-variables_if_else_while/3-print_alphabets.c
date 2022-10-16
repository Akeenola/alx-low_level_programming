/**
 *main- 'program to print alphabet in lower and upper case'
 *
 *Return: 0 on success
 */
#include<stdio.h>
int main(void)
{
	char	lower	=	'a';
	char	upper	=	'A';
	while	(lower <= 'z')
	{
	  putchar(lower);
	  lower++;
	}
	while	(upper <= 'Z')
	{
	  putchar(upper);
	  upper++;
	}
	putchar('\n');
	return (0);
}
