#include "main.h"
#include <stdio.h>

/**
 * _putchar - is a prototype function which print c
 * @c: the character to print
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
