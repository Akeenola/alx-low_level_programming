/**
*main-entry point
*Description:'the program's description'
*Return:0 successul
*/
#include<stdio.h>
int main(void)
{
	printf("Size of a char:	%lu	byte(s)\n", sizeof(char));
  	printf("Size of an int:		%lu	byte(s)\n", sizeof(int));
	printf("Size of a long int:	%lu	byte(s)\n", sizeof(long int));
	printf("Size of long long int:	%lu	byte(s)\n", sizeof(long long int));
	printf("Size of a float:	%lu	byte(s)", sizeof(float));
}
