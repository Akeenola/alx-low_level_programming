/**
*main-entry point
*Description:'the program's description'
*Return:0 successul
*/
#include<stdio.h>
int main(void)
{
	printf("Size of char:\t%lubyte(s)\n", sizeof(char));
	printf("Size of an int:\t%lubyte(s)\n", sizeof(int));
	printf("Size of a long int:\t%lubyte(s)\n", sizeof(long int));
	printf("Size of long long int:\t%lubyte(s)\n", sizeof(long long int));
	printf("Size of a float:\t%lubyte(s)\n", sizeof(float));
}
