#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * main - program to print
 * Return: end
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
