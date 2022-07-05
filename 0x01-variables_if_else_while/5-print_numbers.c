#include <stdio.h>

/*
 * main - print all single digit numbers of base10
 * Return: 0 if success
 *
 */
int main(void)
{
	int b;

	b = 0;
	while (b < 10)
	{
		printf("%d", b);
		b++;
	}
	printf("\n");
	return (0);
}
