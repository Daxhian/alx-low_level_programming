#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
* Return: void
*/
void more_numbers(void)
{
	int i = 0, a, b;

	while (i < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				b = a % 10;
				_putchar('1');
				_putchar('0'+ b);
			}
			else
			{
				_putchar('0' + a);
			}
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
