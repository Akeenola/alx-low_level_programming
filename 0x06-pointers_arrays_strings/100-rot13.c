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
	int	j;
	char	*first;
	char	*second;
	tmp	=	str;
	len	=	strlen(str);
	first	=	"ABCDEFGHIJKLMabcdefghijklm";
	second	=	"NOPQRSTUVWXYZnopqrstuvwxyz";
	for	(i	=	0;	i	<	len;	i++)
	{
		for	(j	=	0;	j	<	26;	j++)
		{
			if	(str[i]	==	first[j])
				str[i]	=	second[j];
			else	if	(str[i]	==	second[j])
				str[i]	=	first[j];
			else
				str[i]	=	str[i];
		}
	}
	return	(tmp);
}
