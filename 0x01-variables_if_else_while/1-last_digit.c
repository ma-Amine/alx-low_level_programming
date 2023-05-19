#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	LastDigit = n % 10;
	printf("Last digit of %d is ", n);

	if (LastDigit > 5)
		printf("%d and is greater than 5\n", LastDigit);
	else if (LastDigit == 0)
		printf("0 and is 0\n");
	else
		printf("%d and is less than 6 and not 0\n", LastDigit);
	return (0);
}
