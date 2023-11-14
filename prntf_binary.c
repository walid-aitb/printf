#include "main.h"

/**
 * prntf_binary - prints binary number
 * @b: argument
 *
 * Return: integer
 */

int prntf_binary(va_list b)

{
	unsigned int counter, j, i, l, n, number;
	int c = 0;

	n = va_arg(b, unsigned int); 
	if (n)
	{
		number = n;
		counter = 0;
		while (number)
		{
			number /= 2;
			counter++;
		}
		j = 1;
		for (i = 1; i <= counter - 1; i++) 
			j *= 2;
		for (i = 1; i <= counter; i++)
		{
			l = n / j;
			_putchar(l + '0');
			c++;
			n -= l * j; 
		  j /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (c);
}
