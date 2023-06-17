#include <stdio.h>
#include <unistd.h>

/**
 * main - This prints digits from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}

	putchar('\n');
	return (0);
}
