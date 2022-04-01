#include <stdio.h>
#include "main.h"

/**
* main - program that prints all arguments
* @argc: argument count
* @argv: argument array
*
* Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
