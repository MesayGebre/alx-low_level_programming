#include "main.h"

/**
 * print_numbers - prints 0 to 9.
 *
 */
void more_numbers(void)
{
	int i;
	int num = 0;
	for (i = 0 ; i <= 10 ; i++)
	{
		while(num < 15)
		{
			if(num > 9)
				_putchar( '0' + num / 10);
			_putchar('0' + num % 10);
			num++;
		}
		num = 0;
		_putchar('\n');
	}
}