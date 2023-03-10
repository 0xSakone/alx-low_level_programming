#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry function
 * @argc: argument count
 * @argv: argument array
 * Return: 0 as successs
 */
int main(int argc, char *argv[])
{
	int sum = 0, n = 0, i;
	int arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	while (n != 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (n >= arr[i])
			{
				n -= arr[i];
				sum++;
				break;
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
