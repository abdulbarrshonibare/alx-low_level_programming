#include <stdio.h>

/**
 * main - print alphabets in lowercase then upppercase
 * return: 0 if success
 *
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
        }

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
