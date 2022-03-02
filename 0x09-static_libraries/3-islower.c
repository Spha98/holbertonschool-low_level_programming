#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	int _islowercase;
	/*if statement*/
	if (c >= 'a' && c <= 'z')
		_islowercase = 1;
	else
		_islowercase = 0;
	return (_islowercase);
}
