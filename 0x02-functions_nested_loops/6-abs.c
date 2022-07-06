#include "main.h"

/**
 * _abs - computes abs value of int
 * @i - take values of i
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
	return(i);
}
