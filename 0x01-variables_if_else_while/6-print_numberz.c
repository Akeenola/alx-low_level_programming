/**
 *main- 'print 0-9 with putchar'
 *
 *Return:  0 when successful
 */
#include<stdio.h>
int main(void)
{
	int	n;
	n	=	0;
	while	(n	<	10)
	{
		putchar(n	+	'0');
		n++;
	}
	putchar('\n');
	return (0);
}
