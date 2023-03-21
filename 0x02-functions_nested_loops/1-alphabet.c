#include "main.h"

/**
 * print_alphabet - Entry Point
 * Description: Prints out letters
 * Return: Void Success
 */
void print_alphabet(void) /*custom header included*/
/* declaration of print_alphabets */
{
	char b = 'a';

	while (b <= 'z')
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
