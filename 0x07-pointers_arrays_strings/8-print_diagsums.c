#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix to print sum of diagonals
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int t, t2;

	t = 0;
	t2 = 0;

	for (i = 0; i < size; i++)
	{
		t += a[(size * i) + i];
		t2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", t, t2);
}
