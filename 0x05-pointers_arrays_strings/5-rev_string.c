#include "main.h"

/**
* rev_string - function thar reverses a string
* @s: character to be checked
*/

void rev_string(char *s)
{
	char t;
	int i, length, length2;

	length = 0;
	length2 = 0;

	while (s[length] != '\0')
	{
	length++;
	}
    
	length2 = length - 1;

	for (i = 0; i < length / 2; i++)
	{
	t = s[i];
	s[i] = s[length2];
	s[length2--] = t;
        
	}
}
