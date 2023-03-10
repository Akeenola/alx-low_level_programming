#include "main.h"


/**
 * main - Entry point
 *
 * @argc: Length of @argv
 *
 * @argv: Array of strings of the arguments of this program
 *
 * Return: 0, Success
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		print_number(multiply_two_nums(_atoi(argv[1]), _atoi(argv[2])));
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (0);
	}
}
