#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: take n value
 * Return: 0 and 1 for their condition
 *
 */
int print_sign(int n)
{
	int check;

	if (n > 0)
	{
		check = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		check = 0;
		_putchar('0');
	}
	else
	{
		check = -1;
		_putchar('-');
	}
	return (check);
}
