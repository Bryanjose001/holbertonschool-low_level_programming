#include "main.h"
/**
 *swap_int - it swaps the value
 *@a: point first value
 *@b: poitns second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
