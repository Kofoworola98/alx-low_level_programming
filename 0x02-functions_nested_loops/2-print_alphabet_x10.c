#include "main.h"

/**
 * print_alphabet_x10 - This prints the lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char num, n;

	for (num = 0; num <= 9; num++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
