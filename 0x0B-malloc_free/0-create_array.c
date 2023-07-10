#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - This function creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: char to be assigned.
 * Description: create an array of size size and assign char c.
 * Return: pointer to array, NULL ifit fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}
