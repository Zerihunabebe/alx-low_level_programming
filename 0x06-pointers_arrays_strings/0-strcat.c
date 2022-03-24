#include "main.h"
/**
 * *_strcat - This function connectes two strings
 * @src: This stings to append
 * @dest: The string to append src to 
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0'
			{
			dest[i] = src[j];
			j++;
			i++;
			}
			dest[i] = '\0';

			return (dest);
			}
