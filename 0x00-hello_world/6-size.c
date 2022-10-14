/**
*main-entry point
*Description:'the program's description'
*Return:0 successul
*/
#include<stdio.h>
int main(void)
{
	printf("Size of an int: \t %lu \t byte(s)\n", sizeof(int));
	printf("Size of a long int: \t %lu \t byte(s)\n", sizeof(long int));
	printf("Size of long long int: \t %lu \t byte(s)\n", sizeof(long long int));
	printf("Size of a float:\t %lu \t byte(s)\n", sizeof(float));
}
