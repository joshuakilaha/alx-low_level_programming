#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program multiplies two numbers
* @argc: argument count
* @argv: argument array
*
* Return: 1 Error if 2 integers are not received
*/

int main(int argc, char *argv[])
{
	int i, mult;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mult = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
