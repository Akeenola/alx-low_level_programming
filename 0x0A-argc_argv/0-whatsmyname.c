#include <stdio.h>

/**
 * main - print program's name
 * @argc: number of command line arguments count
 * @argv: arrays of command line arguments vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
