#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints & random number and states whether
 *        it is positive, negative, or zero
 *
 * Return: Always 0.
*/
int main(void)
{
 	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is %d negative\n", n);
	else
		printf("%d is %d zero\n", n);

	return (0);
}	
