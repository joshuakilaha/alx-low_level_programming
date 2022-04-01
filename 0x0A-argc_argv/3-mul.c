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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
