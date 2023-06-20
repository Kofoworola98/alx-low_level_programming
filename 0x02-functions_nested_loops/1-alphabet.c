#include "main.h"
#include <unistd.h>

/**
 * main - This function prints the alphabet in lower case.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
       
	while(c <= 'z');
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
