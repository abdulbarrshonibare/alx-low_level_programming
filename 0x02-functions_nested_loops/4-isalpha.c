#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * Return: 1 if success
 * @c - arg fot c
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
		return (1);
	}
	else
		return (0);
}
