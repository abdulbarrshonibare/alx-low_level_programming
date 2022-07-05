#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 * Return: 0 if success
 *
 */
int main(void)
{
	int h;
	char c;

	for (h = 48; h < 58; h++)
	{
	putchar(h);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
