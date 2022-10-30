#include "main.h"

/**
 * print_sign - prints the sign of a num
 * @c: is the num
 * Return: 1 if num > zero
 * 0 of number is zero
 * -1 if num is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
