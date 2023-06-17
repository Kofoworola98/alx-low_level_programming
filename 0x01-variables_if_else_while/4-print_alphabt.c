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
	int a;

	for (a = 97; a < 123; a++)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
