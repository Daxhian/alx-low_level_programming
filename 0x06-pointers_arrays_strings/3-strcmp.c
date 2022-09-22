#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string to be compared
* @s2: second string to be compared
*
* Return: If str1 < str2, the negative difference of the first unmatched 
*         characters
*         If str1 == str2, 0
*         If str1 > str2, the positive difference of the first unmatched
*         characters
*/
int _strcmp(char *s1, char *s2)
{
	int len1 = strlen(s1), len2 = strlen(s2);

	if (len1 == len2 || len1 < len2 || len1 > len2)
	{
		return (len1 - len2);
	}
}
