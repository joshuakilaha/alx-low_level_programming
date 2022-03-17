#include "main.h"

/**
 * _isupper - check for uppercase character.
 *@c: character to be checked
 * Return: i if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
