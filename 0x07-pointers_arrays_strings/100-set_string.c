#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: a pointer to a pointer s
 * @to: a pointer to a char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
