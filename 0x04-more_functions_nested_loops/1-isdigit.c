#include "main.h"

/**
 * _isdigit - checks ..
 * @c: int
 * Return: 1 if c is a gigit, 0 otherwise
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
