#include "main.h"

/**
 * print alphabet -prints lowercase alpha
 */
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar(lc);

	_putchar('\n');
}
