#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
void print_alphabet(void);
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar("\n");
	return (0);
}