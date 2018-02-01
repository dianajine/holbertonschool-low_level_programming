#include "holberton.h"
/**
 * swap_int - a functiom that swaps the values of two integers.
 *
 * @a: initially equal to 98 and to be swapped with b.
 * @b: initially equal to 42 and to be swapped with a.
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
