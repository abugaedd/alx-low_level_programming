#include "main.h"

/**
*factorial - calculates factorial of number
*@n: integer whose factorial is being calculated
*Return: nothing
*/

int factorial(int n)
{
	if (n < 1)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
