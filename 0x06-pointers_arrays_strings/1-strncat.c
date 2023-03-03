#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - Append n byte of string to other
 * @dest: string destinatin
 * @src: sring to append
 * @n: n byte to append
 * Return: append strong pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
