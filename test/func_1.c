#include "main.h"

void my_funct(va_list arg_list, char *format, int *ptr)
{
	       while (*format)
        {
                if (*format != '%')
                {
                        __putchar(ptr, *format);
                }
                else
                {
                        format++;
                        if (*format == '\0')
                                break;
                        if (*format == '%')
                        {
                                __putchar(ptr, *format);
                        }
                        if (*format == 'c')
                        {
                                char c = va_arg(arg_list, int);
                                __putchar(ptr, c);
                        }
                        else if (*format == 's')
                        {
                                char *str = va_arg(arg_list, char*);
                                write(1, str, strlen(str));
                                ptr +=strlen(str);
                        }

                }
                        format++;
        }
}
