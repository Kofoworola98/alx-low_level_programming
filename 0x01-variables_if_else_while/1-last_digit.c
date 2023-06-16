#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This will print the last digit of a randomly generated number and show if it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 100) < 6 && (n % 100) !=0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, n % 100);
	}
	else if ((n % 100) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, n % 100);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
				n, n % 100);
	}
	return (0);
}
