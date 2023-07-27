#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j;
	int k;
	int l;

	k = 0;
	l = n - 1;
	while (k < l)
	{
		j = a[k];
		a[k] = a[l];
		a[l] = j;

		k++;
		l--;
	}
}
