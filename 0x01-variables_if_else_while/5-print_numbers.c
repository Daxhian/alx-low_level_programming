#include <stdio.h>

/**
* main - Prints single digit of numbers
*
* Return:Always 0
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		print(num);
	}
	print('\n');
	return (0);
}
