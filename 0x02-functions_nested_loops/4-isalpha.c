#include "main.h"

/**
 * _isalpha - looks up alphabetic chars
 * Description: alphabetical char finder
 * @c: The char to be looked up
 * Return: 1 for alphabetic char or 0 for anything else
 */

int _isalpha(int b)
{
	if ((b >= 65 && b <= 90) || (b >= 97 && b <= 122))
	{
		return (1);
	}

	return (0);
}
