#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: computes the absolute value of this integer.
 *
 * Return: 0.
 */
int _abs(int n)
{
	int a;

	if (n < 0)
	{
		(a = n * -1);
		return (a);
	}
	else
	{
		return (n);
	}
}
