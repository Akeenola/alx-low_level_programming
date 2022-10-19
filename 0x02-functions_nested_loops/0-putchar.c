/**
 *main- ' program to print _putchar'
 *
 *Return: 0 successful
 */
#include"main.h"
int	main(void)
{
	char 	show[]	=	"_putchar";
	int	i;
  for	(i	=	0;	i	<	strlen(show);	i++)
    {
      _putchar	(show[i]);
    }
	_putchar('\n');
	return (0);
}
