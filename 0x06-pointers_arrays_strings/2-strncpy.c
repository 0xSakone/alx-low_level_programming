#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copy n byte string to other
 * @dest: string destinatin
 * @src: sring to append
 * @n: number of by
 * Return: append strong pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strcpy(dest, src, n));
}
