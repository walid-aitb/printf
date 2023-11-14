#include "main.h"

/**
 * prntf_string - prints string
 * @str: argument.
 * Return: length
 */

int prntf_string(char *str)
{
 int i = 0;

if (str == NULL)
{
char *null_str = "(null)";

while (*null_str)
{
_putchar(*null_str);
i++;
null_str++;
}
}
else
{
while (*str)
{
_putchar(*str);
i++;
str++;
}  
}   

return i;
}
