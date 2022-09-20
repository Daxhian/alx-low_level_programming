#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *               followed by a new line.
 * @a: name of array
 * @n: number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, n_i = n - 1;

	for  (i = 0; i <= n_i; i++)
	{
		if (i == n_i)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	_putchar('\n');
}
