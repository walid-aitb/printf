#include "main.h"
/**
 * _printf - printf input and specifiers
 * @format: input
 *
 * Return: len or error
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i, len = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (i = 0; format[i]; i++) /*runs along the string*/
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{   _putchar('%');
				i = i + 1;
				len++;
			}
			else if (search_match(format, i + 1) != NULL)
			{   len += search_match(format, i + 1)(args);
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
