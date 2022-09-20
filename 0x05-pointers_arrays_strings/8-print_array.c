#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *               followed by a new line.
 * @a: accepts integer
 * @n: accepts integer
 * 
 * Return: void
 */
void print_array(int *a, int n)
{
	int arraySize = sizeof(n);
	int intSize = sizeof(n[0]);
	int len = arraySize / intSize;
	int i;

	for  (i = 0; i < len; i++)
	{
		int last = len - 1;

		if (i == last)
			printf("%d", n[i]);
		else
			printf("%d, ", n[i]);
	}

}
