#include "main.h"

/**
*main - printing out _putchar
* Return: Always 0 (Success)
*/

int main(void)
{
	char name[] = "_putchar";
	int chr;

	for (chr = 0; chr < 8; chr++)
	{
		_putchar(name[chr]);
	}
	_putchar('\n');
	return (0);
}
