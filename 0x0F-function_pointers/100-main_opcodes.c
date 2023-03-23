#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry function
 * @argc: int
 * @argv: array
 *
 * Return: 0 as success.
 */
int main(int argc, char *argv[])
{
	char *opcodes = (char *) main;
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opcodes[i] & 0xFF);
		if (i != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
