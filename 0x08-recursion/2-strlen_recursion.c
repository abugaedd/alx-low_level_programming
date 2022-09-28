#include "main.h"


/**
*_strlen_recursion - print length of string
*@s: string with length to be counted
*Return: 0 if success
*/


int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
