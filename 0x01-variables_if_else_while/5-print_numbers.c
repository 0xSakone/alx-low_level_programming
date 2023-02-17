#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Display base 10 digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char digit[10] = "0123456789";

	for (i = 0; i < 10; i++)
	{
		putchar(digit[i]);
	}
	putchar('\n');
	return (0);
}
