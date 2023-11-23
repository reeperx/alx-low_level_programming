#include <main.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * malloc_checked - Allocates memory using malloc
 * @b: size of memory
 * Return: Pointer to the new memory allocated
 *
 */
void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	else
		return (i)
}
