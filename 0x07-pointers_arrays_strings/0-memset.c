#include"main.h"
#include<stdio.h>
#include<string.h>
char *_memset(char *s, char b, unsigned int n)
{
  memset(s, b, n*sizeof(s[0]));
  return (s);
}
