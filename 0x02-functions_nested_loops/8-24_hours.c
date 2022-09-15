#include "main.h"
#include <stdio.h>

/**
* jack_bauer - prints every minute of the day, starting from 00:00 to 23:59
*
* Return: every minute of the day
*/
void jack_bauer(void)
{
	int h, m, h1, h2, m1, m2;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			h1 = h / 10;
			h2 = h % 10;
			m1 = m / 10;
			m2 = m % 10;

			printf("%d", h1);
			printf("%d:", h2);
			printf("%d", m1);
			printf("%d\n", m2);
		}
	}
}
