#include <stdio.h>
#include "main.h"

/**
 * main - This function prints the number of arguments passed to the program.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[1])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return  (0);
}
