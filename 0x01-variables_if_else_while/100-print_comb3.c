#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Display all posible digit of two digits 0, 1 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

    for (i = 0; i < 100; i++)
    {
        if (i / 10 < i % 10)
        {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            if (i < 89)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
	putchar('\n');
	return (0);
}
