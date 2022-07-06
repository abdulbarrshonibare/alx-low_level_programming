#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: take all values of n
 * Return: n if success
 *
 */
int print_last_digit(int n)
{
	int l = n % 10;
	n = n * -1;

	if (n <= 0 || n >= 0)
	{
		_putchar('0' + l);
	}
	return (l);
}
