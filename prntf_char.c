#include "main.h"

/**
 * prntf_char - prints a character
 * @argument: variadic argument
 * Return: 1
**/

int prntf_char(va_list argument)

{
char c = (char) va_arg(argument, int); 
_putchar(c);
return 1;
}
