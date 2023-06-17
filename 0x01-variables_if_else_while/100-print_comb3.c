#include <stdio.h>

/**
 * main - This prints all the possible combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, n;

	for (num = 48; num <= 56; num++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > num)
			{
				putchar(num);
				putchar(n);
				if (num != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
