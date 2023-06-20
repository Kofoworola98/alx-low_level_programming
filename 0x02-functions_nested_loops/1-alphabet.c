#include "main.h"
#include <unistd.h>

/**
 * main - This function prints the alphabet in lower case.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
	return (0);
}
