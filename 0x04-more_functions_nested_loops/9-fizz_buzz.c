#include <stdio.h>

/**
* main - Fizz buzz 1 to 100
* Return: 0 Successful
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
