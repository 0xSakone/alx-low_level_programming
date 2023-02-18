#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Display all posible digit of three digits 0, 1, 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 1000; i++)
	{
		if (i / 100 < i / 10 % 10 && i / 10 % 10 < i % 10)
		{
			putchar(i / 100 + '0');
			putchar(i / 10 % 10 + '0');
			putchar(i % 10 + '0');
			if (i < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
