#include "main.h"

/**
 * main - Prints out alphabets
 * Return: Void
 */

void print_alphabet(void)
{
	char b = 'a';
	while (b <= 'z')
	{
		_putchar(b);
		b++
	}
	_putchar('\n');
}
