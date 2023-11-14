#include "main.h"

/**
 * prntf_id - function that prints an integer
 * @a: argument
 * Return: length
 */

int prntf_id(int a)
{
 int len = 0;

if (a == -2147483648)
return (prntf_str("-2147483648"));
if (a == 0)
{
_putchar('0');
return (1);
}
if (a < 0)
{
_putchar('-');
a = -a;
len++;
}
if ((a / 10) != 0)
{
len += prntf_id(a / 10);
}
_putchar((a % 10) + '0');
len++;
return len;   
}
