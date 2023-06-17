#include <unistd.h>
#include <stdio.h>

/**
 * main - This prints all possible combinations of single digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, num;
	int count = 0;

	for (n = 0; n <= 9; n++)
	{
		for (num = 0; num <= 9; num++)
		{
			putchar('0' + n);
			putchar('0' + num);
			putchar(count < 99 ? ',' : '\n');
			putchar(' ');
			count++;
		}
	}

	return (0);
}
