#include "main.h"

/**
* print_most_numbers - Prints 0 to 9 excluding 2 and 4
*
* Return: void
*/
void print_most_numbers(void)
{
	char a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
		{
			putchar(a + '0');
		}
	}
	putchar('\n');
}
