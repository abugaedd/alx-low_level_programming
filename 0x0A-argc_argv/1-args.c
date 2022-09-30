#include <stdio.h>

#include <stdlib.h>



/**
*main - print name of file
*@argc: argument count
*@argv: number of arguments compiled
*Return: 0 if success
*/



int main(int argc, char __attribute__((unused)) *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));

	return (0);
}
