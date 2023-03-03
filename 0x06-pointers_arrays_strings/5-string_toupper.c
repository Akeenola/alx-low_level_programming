#include<stdio.h>
#include"main.h"
#include<string.h>
/**
 * *string_toupper - changes all lowercase letters of a string to upper
 *
 * @tmp: String to return
 *
 * Return: String
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
