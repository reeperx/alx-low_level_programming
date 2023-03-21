#include "main.h"

/**
 * print_alphabet_x10 - Entry Point
 * Description: Prints out alphabets x10
 * Return: Void Success
 */

void print_alphabet_x10(void) /* prints out letters */
/*declaration of program printing out letters */
{
	int j;
	char b;

	for (j = 0 ; j <= 9 ; j++)
	{
		for (b = 'a' ; b <= 'z' ; b++)
			_putchar(b);
		_putchar('\n');
	}
}
