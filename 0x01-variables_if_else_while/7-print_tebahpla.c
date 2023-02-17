#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Display aplhabet in lowercase reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alphabet[24] = "abcdfghijklmnoprstuvwxyz";

	for (i = 23; i >= 0; i--)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
