#include "main.h"

/**
 * rev_string - This function reverses a string.
 * @s: input string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int a;

	while (s[counter] != '\0')
		counter++;
	for (a = 0; a < counter; a++)
	{
		counter--;
		rev = s[a];
		s[a] = s[counter];
		s[counter] = rev;
	}
}
