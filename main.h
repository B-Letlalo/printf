#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
/*function prototypes*/
int _printf(const char *format, ...);
int cus_strlen(const char *str);
void cus_putchar(char c, int *count);
void cus_puts(const char *str, int *count);
int cus_putint(int num, int *count);
#endif

