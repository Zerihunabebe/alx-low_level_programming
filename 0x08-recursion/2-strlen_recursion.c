#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: The string whose length of is going to be returned
 *
 * Return: An integer of @s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
