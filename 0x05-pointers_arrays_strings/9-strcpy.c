#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by 'src', including the
 *           terminating null byte (\0), to the buffer pointed to by 'dest'
 * @dest: destination of copied string (new string)
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = strcpy(dest, src);

	return (ptr);
}
