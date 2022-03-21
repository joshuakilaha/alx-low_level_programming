#include "main.h"

/**
* swap_int - function that swaps two integers
* @a - character to be checked
* @b - character to be checked
*/

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
