#include "main.h"

/**
 * function - check for uppercase character.
 *
 * Return: success.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
