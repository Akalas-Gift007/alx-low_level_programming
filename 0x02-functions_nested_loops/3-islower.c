#include "main.h"

/**
 * _islower - checks if a char is lowercase
 * @c: is the char
 * Return: 1 if char is lower, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
