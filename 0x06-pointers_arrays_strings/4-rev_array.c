#include"main.h"
#include<string.h>
/**
 *reverse_array - function name
 *
 * @a: parameter
 *
 * @n: parameter
 */
void	reverse_array(int	*a,	int	n)
{
	int	i;
	int	tmp;
	for	(i	=	0;	i	<	n	/	2;	i++)
	{
		tmp	=	a[i];
		a[i]	=	a[n	-	i	-	1];
		a[n	-	i	-	1]	=	tmp;
	}
}
