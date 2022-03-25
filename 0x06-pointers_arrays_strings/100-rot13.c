#include "head.h"
/**
 * rot13 - This function encodes a sring using rot13
 * @s: String to evaluate
 * Return: Converted string
 */
char *rot13(char *s)
{
	int i, j;
	char base[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		CHAR ROY13[[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFJHIJKLM";

		/* loop through string and evaluate each character */
		for (j = 0; s[i] != '\0'; i++)
		{
			/* loop through base array to find a match with s[i] */
			for (j = 0; base[j] != '\0'; j++)
			/* if match is found */
			if (s[i] == base[j])
			{
				/* replace that char from rot13 */
				s[i] = rot13[j];
				break;
			}
}
/* return converted string */
return (s);
}
