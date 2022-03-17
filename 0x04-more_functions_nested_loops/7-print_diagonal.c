#include "main.h"

/**
* print_diagonal - fucntion that draws diagonal line
* @n: number of times the character "\" should be printed
*/

void print_diagonal(int n)
{
	int i;
	int space;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (space = 1; space < i; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

