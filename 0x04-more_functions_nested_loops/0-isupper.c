#include "main.h"

/**
 * _isupper - A function tjat checks for uppercase character.
 * @c: An input characte
 * Return: 1 if c is uppercase or 0 otherise
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
