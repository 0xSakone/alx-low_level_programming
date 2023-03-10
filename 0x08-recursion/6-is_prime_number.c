#include "main.h"
#include <math.h>

int is_prime_number_helper(int n, int i);
/**
 * is_prime_number - function
 * @n: integer
 *
 * Return: the result if n is prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime_number_helper(n, 2));
}

/**
 * is_prime_number_helper - function
 * @n: integer
 * @i: iteration
 *
 * Return: the result if n is prime number
 */
int is_prime_number_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime_number_helper(n, i + 1));
}
