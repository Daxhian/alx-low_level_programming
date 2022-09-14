#include "main.h"
#include <unistd.h>

/**
* main - Prints the char c to stdout
*
* Return: 0
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
