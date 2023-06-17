#include <stdio.h>
#include <unistd.h>

/**
 * main - This prints the lowercase alphabets in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
