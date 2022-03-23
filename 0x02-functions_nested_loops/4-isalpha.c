#include <unistd.h>
#include "main.h"

/**
 * _isalpha - checks whether the passed character is an alphabet (A-Z or a-z)
 * @c: The character to check
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
