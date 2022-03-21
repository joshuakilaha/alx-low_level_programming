#include "main.h"

/**
* print_rev - function print string in reverse
* @s: character to be checked
*/

void print_rev(char *s)
{
	int i = 0;
	int j, size;

	while (s[i] != '\0')
	{
		i++;
	}
	size = i;

	for (j = size - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
