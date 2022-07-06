#include "main.h"

/**
 * _abs - computes abs value of int
 * @i: take values of i
 * Return: i if success
 */
int _abs(int i)
{
	if (i <= 0)
	{
		i = i * -1;
	}
	else
	{
		i = i;
	}
	return (i);
}
