#include "main.h"

/**
* print_line - function to draw a straignt line
* @n: number of times '_' should be printed
* Return - Always 0
*/

void print_line(int n)
{
	int i = n;

	for (i = n; i > 0; i--)
		_putchar('_');
	_putchar('\n');
}
