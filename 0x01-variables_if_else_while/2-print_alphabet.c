#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Display aplhabet in lowercase
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
		putchar('\n');
	}
	return (0);
}
