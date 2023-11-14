#include "main.h"

/**
 * spec_format - handles the conversion specifiers
 * @i: counter
 * @spec: character specifier
 * @arg: argument
 */

void spec_format(va_list arg, char spec, int *i)

{
 switch (spec)
{
	case 'c':
		i += _putchar(va_arg(arg, int)); 
		break;
	case 's':
		i += prntf_string(va_arg(arg, char*)); 
		break;
	case '%':
		i += _putchar('%');
		break;
	case 'd':
		i += printf("%d", va_arg(arg, int));
		break;
	case 'i':
		i += printf("%i", va_arg(arg, int));
		break;
	default:
		_putchar('%');
		_putchar(spec);
		i += 2;
		break;
}
}
