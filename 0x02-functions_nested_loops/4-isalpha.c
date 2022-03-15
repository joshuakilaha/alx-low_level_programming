#include "main.h"

/**
* _isalpha - function to check if
*	     character is uppercase or lowercase
* @c: checks input of function
*
* Return: return 1 if 'c' is upper or lowercase
*			otherwise return 0 (Success)			
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 61 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
