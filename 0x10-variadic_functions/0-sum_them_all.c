#include "variadic_functions.h"
<<<<<<< HEAD
#include<stdarg.h>
#include<stdio.h>
int sum_them_all(const unsigned int n, ...)
{
  va_list pargs;
  unsigned int k;
int sum;
 va_start(pargs,n);
 sum = 0;
  for (k = 0;k<n;k++)
    {
      int num = va_arg(pargs,int);
      sum =sum+num;
    }
  va_end(pargs);
  return sum;
}   
=======

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
>>>>>>> 1d170f95676e2bde68c498654d95bb47719fd4ae
