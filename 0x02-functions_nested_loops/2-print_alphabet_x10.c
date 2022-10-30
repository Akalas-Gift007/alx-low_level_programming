#include "main.h"

/**
 * print_alphabet_x10 - print ten times lowercase alpha
 */

void print_alphabet_x10(void)
{
	int 10;
	char lc;

	for (10 = '0'; 10 <= '9'; 10++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}
}
