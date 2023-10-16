#include "main.h"
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
	int no_char_printed = 0, *p;

	va_list arg_list;
	p = &no_char_printed;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	while (*format)
	{
		if (*format != '%')
		{
			__putchar(p, *format);
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				__putchar(p, *format);
			}
			if (*format == 'c')
			{
				char c = va_arg(arg_list, int);
				__putchar(p, c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(arg_list, char*);
				int count = 0;

				write(1, str, count);
				no_char_printed +=strlen(str);
			}
		}
			format++;
	}
	va_end(arg_list);
	return (no_char_printed);
}
