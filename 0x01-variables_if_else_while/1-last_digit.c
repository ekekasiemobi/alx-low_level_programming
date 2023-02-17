#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is %d", n, n % 10);
	if (n % n > 5)
		printf("and its greater than 5\n");
	else if (n % 10 == 0)
		printf("and its is zero\n");
	else if (n % n < 6)
		printf("and its less than 6 not zero\n");

	return (0);
}
