#include <stdio.h>

/**
 * main - main entry function
 *
 * Return: return always 0
 */
int main(void)
{
	long int number;
	int j, old;

	old = 1;
	number = 612852475143;
	j = 1;
	while (number > 0)
	{
		while (number % j != 0)
			j++;
		number = number / j;
		if (j > old)
			old = j;
		j++;
		if (number == 1)
			break;
	}
	printf("%i\n", old);
	return (0);
}
