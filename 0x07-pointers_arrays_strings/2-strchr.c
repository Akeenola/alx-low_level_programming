#include"main.h"
#include<string.h>
/**
 *_strchr - locates character in a string
 * @s: string
 *@c: character
 *return: the pointer to ther first occurence of c
 */
char *_strchr(char *s, char c)
{
	while	(*s)
	{
		s++;
		if	(*s	==	c)
			return	(s);
	}
	return	(0);
}
