#include "main.h"

/*
 * _print_rev_recursion - Prints a sring in reverse
 * @s: Pointer to the string
 *
 * Return: returns 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
