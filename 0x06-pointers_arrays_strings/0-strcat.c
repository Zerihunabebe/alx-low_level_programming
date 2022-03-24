#include "main.h"

/**
 * *_strcat - This function connectes two strings
 * @src: This stings to append
 * @dest: The string to append src to 
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	/* take the length of string dest*/
	for (len = 0; dest[len] != 0; len++)
		;

	/* append src string to end of dest string*/
	for (i = 0; src[i] != 0; i++)
	{
		det[len] = src[i];
		len++;
	}

	return (dest);
}
