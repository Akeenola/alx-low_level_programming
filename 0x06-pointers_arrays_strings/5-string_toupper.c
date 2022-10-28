#include<stdio.h>
#include"main.h"
#include<string.h>
/**
 * string_toupper - function name
 *
 * Return: Always @tmp
 *
 * @tmp: parameter
 */
char	*string_toupper(char	*tmp)
{
	int	len;
	int	i;
	len	=	strlen(tmp);
	for	(i	=	0;	i	<	len;	i++)
	{
		if	(tmp[i] 	>=	'a'	&&	tmp[i]	<=	'z')
			tmp[i] = tmp[i] - 32;
	}
	return	(tmp);
}
