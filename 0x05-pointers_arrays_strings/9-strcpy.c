#include<string.h>
#include"main.h"
/**
 * _strcopy - function name
 *
 * @dest : parameter
 *
 * @src : parameter
 */
char	*_strcpy(char	*dest,	char	*src)
{
	int	len	=	strlen(src);
	int	i;
	for	(i	=	0;	i	<	len;	i++)
	dest[i]	=	src[i];
	return (dest);
}
