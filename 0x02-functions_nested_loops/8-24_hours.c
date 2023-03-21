#include "main.h"

/**
 * jack_beuer -  function that prints every minute of the day of Jack Beuer
 * 
 * Return: nothing.
 */

void jack_beuer(void)
{
	int x = 0;
	int j = 0;
	
	while (x <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j += 1;
		}
		x += 1;
	}
}
