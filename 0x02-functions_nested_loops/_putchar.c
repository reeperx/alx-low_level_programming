#include <unistd.h>

/**
 * _putchar prints the character c to stdout
 * Return: 1.
 * for error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
