#include"main.h"
#include<string.h>
/**
 *_strncpy - function name
 *
 *Return: always @dest
 *
 *  @dest: parameter
 *
 * @src: parameter
 *
 * @n: parameter
 */
char	*_strncpy(char	*dest,	char	*src,	int	n)
{
	strncpy(dest,	src,	n);
	return	(dest);
}
