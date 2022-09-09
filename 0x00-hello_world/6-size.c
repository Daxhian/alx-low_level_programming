#include <stdio.h>

/**
*
* main - Entry point
*
* Description: Prints the sizes of various types
*
* Return: Always 0 (Sucess)
*/
int main(void)
{
	char charT;
	int intT;
	long int longT;
	long long int longlongT;
	float floatT;

	printf("Size of a char: %d byte(s)\n", sizeof(charT));
	printf("Size of an int: %d byte(s)\n", sizeof(intT));
	printf("Size of a long int: %d byte(s)\n", sizeof(longT));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlongT));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatT));
	return (0);
}
