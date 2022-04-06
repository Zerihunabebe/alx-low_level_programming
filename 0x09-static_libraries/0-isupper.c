#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 *
 * @c: Numbers to be checked
 *
 * Return: 1 (Success) OR 0 (Failure)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
