#include"main.h"
#include<string.h>
/**
 * _strncat - function on concatenation
 *
 * Return: Always @dest
 *
 *  @dest : parameter
 *
 * @src : parameter
 *
 * @n : parameter
 */
char	*_strncat(char	*dest,	char	*src,	int	n)
{
	strncat(dest,	src,	n);
	return	(dest);
}
