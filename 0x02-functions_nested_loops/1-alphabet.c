#include "../main.h"

/**
 * main - function for lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alp;
	
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
