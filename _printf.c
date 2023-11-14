#include "main.h"

/**
 * _printf - prints an output according to a format
 * @format: string.
 * @...: Variable arguments
 * Return: Number of printed chars, else -1 on error.
 */

int _printf(const char *format, ...)
int prntf_binary(unsigned int num);
int prntf_id(int num);
int prntf_string(char *str);
{
	int i = 0;
	va_list arg; 

	va_start(arg, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				i++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(arg, int);

				if (num == 0) 
				{
					_putchar('0');
					i++;
				}
				else
				{
					i += print_id(num);
				}
			}
			else if (*format == 'c')
			{
				_putchar(va_arg(arg, int));
				i++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(arg, char *);

				if (str == NULL)
				{
					prntf_string("(null)");
					i += 6;
				}
				else
				{
					i += prntf_string(str); 
				}
			}
			else if (*format == 'b')
			{
				unsigned int num = va_arg(arg, unsigned int);

				return (prntf_binary(num));
			}
			else if (*format == 'r')
			{
				char *str = va_arg(arg, char *);
				int len = prntf_strlen(str);
				int j;

				for (j = len - 1; j >= 0; j--)
				{
					_putchar(str[j]);
					i++;
				}
			}
			else if (*format == 'R')
			{
				char *str = va_arg(arg, char *);
				char *rot_str = rot13(str);

				i += prntf_string(rot_str);
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				i += 2;
			}
		}
		else
		{
			_putchar(*format);
			i++;
		}
		format++;
	}
	va_end(arg);
	return i;
}
