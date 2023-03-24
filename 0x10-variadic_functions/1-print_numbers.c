<<<<<<< HEAD
#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
  va_list pargs;
  unsigned int k;
  unsigned int i;
  va_start(pargs,n);
  for(i = 0; i<n;i++)
    {
      k = va_arg(pargs,int);
      printf("%d",k);
      if(i!=n-1)
      printf("%s",separator);
    }
  va_end(pargs);
=======
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: pointer to the string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		if (!separator)
			printf("%d", va_arg(params, int));
		else
			printf("%d%s", va_arg(params, int), separator);
	}

	if (n)
		printf("%d\n", va_arg(params, int));
	else
		printf("\n");

	va_end(params);
>>>>>>> 1d170f95676e2bde68c498654d95bb47719fd4ae
}
