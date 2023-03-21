#include "main.h"

/**
 * times_table - function for printing 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int row, col, mult;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			mult = row * col;
			if (col == 0)
			{
				_putchar(mult + '0')
			}

				if (mult < 10 && col !=0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mult + '0');
				} else if (mult >= 10)
				{
				_putchar(' ');
				_putchar(',');
				_putchar(mult / 10) + '0');
				_putchar(mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

