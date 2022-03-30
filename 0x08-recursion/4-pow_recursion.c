#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* _pow_recursion -  Function to return the
* value of x raised to the power of y
* @x: int
* @y: power
* Return: if y < 0 return -1
*
* return (pow(x, y)); //alternative with the math.h lib
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
