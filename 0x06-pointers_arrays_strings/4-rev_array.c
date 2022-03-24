#include "main.h"

/**
 * reverse_array - This function reverses the content of an array of
 * integers
 * @a: The array of integers to revers
 * @n: The number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	/* loop throug array reversing elements */
	for (i = 0; i < n; i++)
	{
		/* not including null byte */
		n--;
		/* store first element in a temp variable */
		tmp = a[i];
		/* store last element infirst variable */
		a[i] = a[n];
		/* store first element in last element's place */
		a[n] = tmp;
	}

}
