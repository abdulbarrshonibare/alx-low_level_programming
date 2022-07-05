#include "main.h"

/**
 * main - print the alphabet in lowercase
 * Return: 0 if success
 *
 */
void print_alphabet(void)
{
	char a = 'a';
	
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
