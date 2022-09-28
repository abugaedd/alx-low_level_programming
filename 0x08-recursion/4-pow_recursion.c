#include "main.h"


/**
*_pow_recursion - x raised to power of y
*@x: the base
*@y: the number being raised to
*Return: nothing
*/


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
