#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - This function prints the alphabet in lower case.
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
