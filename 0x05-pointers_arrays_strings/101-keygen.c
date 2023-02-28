#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int ra, total, c;

	srand(time(NULL));
	c = total = 0;
	while (total < 2772)
	{
		ra =  rand() % 128;
		if (ra % 2 == 0 && ra > 0)
		{
			if (total == 2772)
			{
				break;
			}
			if (total + ra <= 2772)
			{
				total = total + ra;
				printf("%c", ra);
				c++;
			}
		}
	}

	return (0);
}
