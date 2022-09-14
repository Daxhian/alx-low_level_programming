#include "main.h"
#include <stdio.h>

/**
* print_alphabe_x10 - prints the alphabet in lower case ten times
* 
* Return: Always (0)
*/
void print_alphabet_x10(void)
{
	int i = 1;
	char c;

	while (i <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
		i++;
	}
	return (0);
}
