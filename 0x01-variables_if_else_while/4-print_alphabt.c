#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - This prints the alphabets in lowercase without q and e.
 *
 * Return : always (0)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			letter += 1;
		}
		else
		{
			putchar(letter);
			letter += 1;
		}
	}
	putchar('\n');
	return 0;
}
