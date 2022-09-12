#include <stdio.h>

/**
* main - Print numbers from 0 - 9 with commas and spaces between them
*
* Return: Always 0
*/
int main(void)
{
	int num;

	for(num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if(num !=9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
