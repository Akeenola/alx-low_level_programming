#include<string.h>
#include<stdio.h>
/**
 * _atoi - function name
 *
 * @s : parameter
 */
int	_atoi(char	*s)
{
	int	i;
	int	len;
	len	=	strlen(s);
	if	(len	==	0)
		return (0);
	else
	{
	  for	(i	=	0;	i	<	len;	i++)
		{
			if((s[i]	>=	48)	||	(s[i]	<=	57))
			  printf("%s",	*(s+i));
			else
				continue;
		}
	}
	return (0);
}
