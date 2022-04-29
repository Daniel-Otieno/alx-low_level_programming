#include "main.h"
/**
 * _pow_recursion - raises a number to power y
 * @x: number to raise
 * @y: number of times to multiply by itself
 * Return: raised number on success, -1 on failure.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
