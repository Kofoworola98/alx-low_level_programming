#include <stdio.h>

/**
 * main -  This prints the alphabets in lowercase and in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0;  a < 52; a++)
	{
		putchar(alp[a]);
	}
	putchar('\n');
	return (0);
}
