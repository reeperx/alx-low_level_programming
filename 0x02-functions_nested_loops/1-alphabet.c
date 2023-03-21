#include "main.h"

/**
 * main - Prints our alphabets
 * Return: Void
 */

void print_alphabet(void)
{
	char b = 'a';
	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
