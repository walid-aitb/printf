#include "main.h"

/**
 * prntf_string - prints tring
 * @argument: variadic argument 
 * Return: integer
**/

int prntf_string(va_list argument)
{
 char *str;
 int i;

str = va_arg(argument, char *);
if (str == NULL)
{
	str = "(null)";
}
for (i = 0; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}
return i;
}
