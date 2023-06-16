#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This prints the last digit of randomly generated number and show if it's  greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 100) < 6 && (n % 50) !=0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, n % 50);
	}
	else if ((n % 50) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, n % 50);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
				n, n % 50);
	}
	return (0);
}
