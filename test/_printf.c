#include "main.h"

/**
 * _printf - prints an output according to a format
 * @format: input
 * Return: length
 */

int _printf(const char *format, ...)

{

va_list args;
unsigned int i, len = 0;

va_start(args, format);

if (!format || (format[0] == '%' && !format[1]))
	return (-1);

for (i = 0; format[i]; i++)
{
	if (format[i] == '%')
	{
		if (format[i + 1] == '%')
		{   _putchar('%');
			i = i + 1;
			len++;
		}
		else if (prntf_search(format, i + 1) != NULL)
		{   len += prntf_search(format, i + 1)(args);
			i = i + 1;
		}
		else
		{ _putchar(format[i]);
			len++;
		}
	}
	else
	{ _putchar(format[i]);
		len++;
	}
}
va_end(args);
return (len);
}
