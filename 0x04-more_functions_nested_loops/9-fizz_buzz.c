#include <stdio.h>

/**
 * main - main entry function
 *
 * Return: return always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 != 0)
		{
			if (i >= 10)
				printf("%i", i);
			else
				printf("%i", i);
		}
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
