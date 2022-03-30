#include "main.h"

/**
* factorial - function to return the factorial
* of a given number
* @n: int
* Return: if n < 0 return -1 to indicate an error
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
