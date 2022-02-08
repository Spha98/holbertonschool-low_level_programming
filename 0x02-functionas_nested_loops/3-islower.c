#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
