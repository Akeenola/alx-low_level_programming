#include"main.h"

/**
 * Task0 - Print putchar
 *
 * Return: void
 */
int	main(void)
{
	char 	show[]	=	"_putchar";
	int	i;
  for	(i	=	0;	i	<	8;	i++)
    {
      _putchar	(show[i]);
    }
	_putchar('\n');
	return (0);
}
