#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
int _printf(const char *format, ...);
void __putchar(int *ptr, char a);
void char_arg_print(va_list arg_list, int *ptr);
void string_arg_print(va_list arg_list);
#endif

