#include <unistd.h>
#include <stdio.h>

/**
 * main - This prints all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, num;

	for (n = 0; n <= 9; n++)
	{
		for (num = 0; num < 9; num++)
		{
			putchar('0' + n);
			putchar(',');
			putchar(' ');
			putchar('0' + num);
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
