#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints a text according number
 *
 * Return: Always (Success)
 */
int main(void)
{
	 int n;
	 /*Random number*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;
	/*if statement method*/
	if (L > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, L);
	else if (L == 0)
		printf("Last digit of %d is %d and is 0\n", n, L);
	else if (L < 6){
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, L);
	return (0);
}
