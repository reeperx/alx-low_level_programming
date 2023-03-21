#include "main.h"

/**
 * _islower - Entry point
 * Description: lower case letter
 * @c: The character to be checkeds
 * Return: 1 for lowwercase char or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
