#include "holberton.h"
/**
 * swap_int - a functiom that swaps the values of two integers.
 *
 * Return: 0.
 */

void swap_int(int *a, int *b)
{
	int i;
        i = *b;
	*b = *a;
	*a = i;
}
