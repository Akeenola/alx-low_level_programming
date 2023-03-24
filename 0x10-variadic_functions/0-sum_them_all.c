#include "variadic_functions.h"
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
