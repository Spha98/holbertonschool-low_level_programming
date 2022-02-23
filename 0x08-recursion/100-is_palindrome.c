#include "main.h"

int check_palindrome(char *s);

/**
 * is_palindrome - Return is a string is palindrome
 * @s: the string value to be checked
 *
 * return: integer value
 */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
}

/**
 *
