#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry function
 * @argc: argc
 * @argv: array
 * Return: 0 as success
 */
int main(int argc, char *argv[])
{
	int total;

	total = atoi(argv[0]) * atoi(argv[argc - 1]);
	_putchar('\n');
	return (0);
}
