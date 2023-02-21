#include "main.h"

/**
 * _isalpha - Shows 1 if the input is a
 * letter Another cases, shows 0
 *
 *@n: The character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */
int _isalpha(int n)
{
	if ((n >= 97 && n <= 122) || (n >= 65 && n <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
