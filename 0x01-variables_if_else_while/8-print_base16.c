#include <stdio.h>

/**
* main - Prints numbers of base 16
*
* Return: 0
*/
int main(void)
{
	int num;
	int letter;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	return (0);
}
