#include "main.h"

/**
 * set_string - This function sets the value of a pointer to a char.
 * @s: pointer to pointed
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}