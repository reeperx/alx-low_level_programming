#include "main.h"

/**
 * Main - prints out alphabets
 * Description - Alphabet program
 * Return: 0 Always
 **/

void print_alphabet(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
