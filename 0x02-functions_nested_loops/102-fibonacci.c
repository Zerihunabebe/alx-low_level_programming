#include "main.h"
#include <stdio.h>

/**
 * main - Print first 50 number of the fibonacci seruence
 *
 * Return: 0
 */

int main(void)
{
	int i, l;
	long n1, n2, next;

	n1 = 1;
	n2 = 2;
	l = 50;

	for (i = 0; i < l; i++)
	{
		if (i == 49)
		{
			printf("%lu", n1);
		}
		else
		{
			printf("%lu, ", n1);
		       next = n1 + n2;
	       n1 = n2;
n2 = next;
		}
	}
	printf("\n");
	return (0);
}
