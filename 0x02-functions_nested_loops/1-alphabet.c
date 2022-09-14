#include "main.h"
#include <stdio.h>

/**
* print_alphabet - prints the alphabet in lower case
*
* Return: void
*/
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar("\n");
}
