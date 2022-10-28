#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 * rot13 - function name
 *
 * Return: Always @tmp
 *
 * @str: parameter
 */
char	*rot13(char	*str)
{
	char	*tmp;
	int	len;
	int	i;
	tmp	=	str;
	len	=	strlen(str);
	for	(i	=	0;	i	<	len;	i++)
	{
		if	((str[i]	>=	'a'	||	str[i]	>=	'A')	&&	(str[i]	<=	'm'	||	str[i]	<=	'M'))
		{
			str[i]	=	str[i]	+	13;
			tmp[i]	=	str[i];
		}
		else if	((str[i]	<=	'z'	||	str[i]	<=	'Z')	&&	(str[i]	>=	'o'	||	str[i]	>=	'O'))
		{
			str[i]	=	str[i]	-	13;
			tmp[i]	=	str[i];
		}
		else
			tmp[i]	=	str[i];
		}
	return	(tmp);
}
