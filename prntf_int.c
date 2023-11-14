#include "main.h"

/**
 * prntf_int - prints integer
 * @args: argument
 * Return: integer
*/

int prntf_int(va_list args)

{

int  i = 1;
int num = va_arg(args, int);
int number, end = num % 10, digit, j = 1;

num /= 10;
number = num;

if (end < 0)
{
	_putchar('-');
	number = -number;
	num = -num;
	end = -end;
	i++;
}
if (number > 0)
{
	while (number / 10 != 0) 
	{
		j *= 10;
		number /= 10;
	}
	number = num;
	while (j > 0)
	{
		digit = number / j;
		_putchar(digit + '0'); 
		number = number - (digit * j);
		j /= 10;
		i++;
	}
}
_putchar(end + '0');
return i;
}
