#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	int num;
	num = 0;
	while (num < 100)						
	{
		num++;
		if ((num % 3) != 0 && (num % 5) != 0)
		{
			printf("%d ", num);
			printf("%d", num);
		}
		else if ((num % 3)  == 0 && (num % 5) != 0)
		{
			printf("Fizz ");
			printf("Fizz");
		}
		else if ((num % 3) != 0 && (num % 5) == 0)
		{
			printf("Buzz ");
			printf("Buzz");
		}
		else
		{
			printf("FizzBuzz ");
			printf("FizzBuzz");
		}
		if (num < 100)
			putchar(32);
	}
	putchar('\n');
	return (0);
}
