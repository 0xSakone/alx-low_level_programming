#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Display all posible digit of two double digit like 00 00, 00 01 ... 99 99
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10000; i++)
	{
		if (i / 100 < i % 100)
		{
			putchar(i / 1000 + '0');
			putchar(i / 100 % 10 + '0');
			putchar(' ');
			putchar(i / 10 % 10 + '0');
			putchar(i % 10 + '0');
			if (i < 9899)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
