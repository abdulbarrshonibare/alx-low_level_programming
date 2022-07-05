#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 * Return: 0 if success
 *
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
