#include "main.h"

/**
 * main - prints out alphabets
 * Description: 'the program runs letters's
 * Return: Void Success
 */
void print_alphabet(void) /*custom header included*/
{
	char b = 'a';

	while (b <= 'z')
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
