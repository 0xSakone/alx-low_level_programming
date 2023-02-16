#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;
	while (message[i] != '\0')
	{
		putchar(message[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
