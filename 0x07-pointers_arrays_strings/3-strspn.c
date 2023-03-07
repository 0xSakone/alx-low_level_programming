#include "main.h"
#include <string.h>

/**
 * _strspn - check the code
 * @s: string
 * @accept: string
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
