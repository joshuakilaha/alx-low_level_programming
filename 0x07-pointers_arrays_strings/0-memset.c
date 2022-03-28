#include "main.h"

/**
* *_memset - function that fills memory
* with constant byte
* @s: memory to be filled
* @b: character to be copied
* @n: number of times to copy b
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
