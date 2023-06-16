#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Print if number is negative, positive or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;
	if (x > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (x == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (x < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}	
