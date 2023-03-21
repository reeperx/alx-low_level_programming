#include "main.h"

/**
 * main - Program for lower case
 * _islower - Entry point
 * @c: the character
 * Return: void Success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
