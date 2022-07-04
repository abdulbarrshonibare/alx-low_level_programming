#include <stdio.h>

/**
 * main - print alphabets in lowercase then upppercase
 * return: 0 if success
 *
 */
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c >= 'z'; c++)
	{
		putchar(c);
	}
	for (C = 'A'; C >= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');

	return (0);
}
