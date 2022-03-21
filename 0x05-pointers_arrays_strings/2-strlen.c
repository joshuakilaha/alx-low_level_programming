#include "main.h"

/**
* _strlen - function returns legnth of a string
* @s: string to be checked
* Return - size
*/

int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);
}
