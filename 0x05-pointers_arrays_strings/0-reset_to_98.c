#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: pointer to the variable to update
 */
void reset_to_98(int *n)
{
	int *p = &*n;

	*p = 98;
}
