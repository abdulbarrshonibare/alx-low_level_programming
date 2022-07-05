#include <stdio.h>

/**
 * main - print all letter except q and e
 * Return: 0 if success
 *
 */
int main(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
	if (c != 'e' && c != 'q')
	{
	putchar(c);
	}
	c++;
	}
	putchar('\n');
	return (0);
}
