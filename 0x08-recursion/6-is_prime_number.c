#include "main.h"
/**
 * check_prime - check for prime number
 * @x: factorials
 * @y: number to check
 * Return: 1 if prime, 0 otherwise.
 */
int check_prime(int x, int y)
{
	if (y == 0 || y == 1 || y < 0)
		return (0);
	if (y % x == 0 && y != x)
		return (0);
	if (y % x == 0 && y == x)
		return (1);
	return (check_prime(x + 1, y));
}
/**
 * is_prime_number -check if a number is a prime number
 * @n: number to check
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(2, n));
}
