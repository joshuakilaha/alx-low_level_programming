#include <stdio.h>
#include "main.h"

/**
* main - Printing the number of arguments passed
* @argc - argument count
* @argv - argument array
*
* Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
