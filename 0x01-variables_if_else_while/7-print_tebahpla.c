#include <stdio.h>

/**
* main - Prints lower case alphabet in reverse
*
* Return: Always 0
*/
int main(void)
{
	int l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
