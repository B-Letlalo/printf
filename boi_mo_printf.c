#include "main.h"
#include <unistd.h>
/**
 * _printf - Mimics printf
 * @format: First operand
 *
 * Description: Function prints some specific conversion specifers.
 * Authors: Boikano, Mouktar.
 * Return: no_char_printed;
 */
int _printf(const char *format, ...)
{
	int no_char_printed = 0;
	char c;

	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			no_char_printed++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				no_char_printed++;
			}
			if (*format == 'c')
			{
				c = va_arg(arg_list, int);
				write(1, &c, 1);
				no_char_printed++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(arg_list, char*);
				int count = 0;

				while (str[count] != '\0')
				{
					count++;
				}
				write(1, str, count);
				no_char_printed += count;
			}
		}
			format++;
	}
	va_end(arg_list);
	return (no_char_printed);
}


