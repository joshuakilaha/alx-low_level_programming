#include "main.h"

/**
 * puts2 - Function prints one char out of 2 of a string
 * @str: character to be checked
 */
void puts2(char *str)
{
	int length, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
