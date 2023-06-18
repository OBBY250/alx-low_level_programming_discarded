#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -prints a number
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d of %d", n, n % 10);
	if ((n % 10) > 5)
		printf("n is greater than 5\n");
	else if ((n % 10) == 0)
		printf("n is 0\n");
	else if ((n % 10) < 6 && (n % 10) != 0)
		printf("n is less than 6 and is not 0\n");
return (0);
}
