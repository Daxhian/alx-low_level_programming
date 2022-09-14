#include "main.h"
#include <stdio.h>

/**
* main - Prints _putchar
*
* Return: 0
*/
int main(void)
{
	char i[8] = "_putchar";
	char put[10] = _putchar(i);

	printf(put);
	printf("\n");
	return (0);
}
