/**
*main-entry point
*Description:'the program's description'
*Return:0 successul
*/
#include<stdio.h>
int main(void)
{
	printf("Size of char:%lu\tbyte(s)\n", sizeof(char));
	printf("Size of an int:%lu\tbyte(s)\n", sizeof(int));
	printf("Size of a long int:%lu\tbyte(s)\n", sizeof(long int));
	printf("Size of long long int:%lu\tbyte(s)\n", sizeof(long long int));
	printf("Size of a float:%lu\tbyte(s)\n", sizeof(float));
}
