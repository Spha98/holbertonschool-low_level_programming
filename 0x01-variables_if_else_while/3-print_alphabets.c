#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
	char d;

	for(d = 'a'; d <= 'z'; d++)
	{
		putchar(d);
	}

	for(d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}

	putchar('\n');

	return (0);

}
