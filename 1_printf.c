#include "main.h"
/**
 * _printf - Mimics printf
 * @format: First operand
 *
 * Return: no_char_printed as count;
 */
int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && (*(format + 1) == 'i' || *(format + 1) == 'd'))
		{
			int value = va_arg(args, int);

			cus_putint(value, &count);
			format += 2;
		}
		else
		{
			cus_putchar(*format, &count);
			format++;
		}
	}

	va_end(args);
	return (count);
}

