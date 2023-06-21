#include <stdio.h>
/**
 * main - Check descripton
 * Description: This computes and prints the sum of all the multiples of
 * 3 or 5 below 1024, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int n = 0;
	unsigned long int x = 0, y = 1, next = 0;

	while (n < 98)
	{
		next = x + y;
		x = y;
		y = next;
		printf("%lu", next);

		if (n < 97)
			printf(",");
		n++;
	}
	putchar('\n');
	return (0);
}
