#include "main.h"
#include <stdio.h>

/**
* times_table - Prints times table from 0 to 9
*
* Returns: Always 0
*/
void times_table(void)
{
	int m_ier;
	int m_cand;
	int product;

	for (m_cand = 0; m_cand <= 9; m_cand++)
	{
		for (m_ier = 0; m_ier <= 9; m_ier++)
		{
			product = m_ier * m_cand;
			if (m_ier < 9)
			{
				putchar(product);
			}
			else
			{
				_putchar(product);
			}
		}
	}
}
