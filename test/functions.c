#include "main.h"

void __putchar(int *ptr, char a)
{
        write(1, &a, 1);
        ptr++;
}

void char_arg_print(va_list arg_list, int *ptr)
{
	char c = va_arg(arg_lst ,int);
	write(1, &c, 1);
	ptr++;
}

void string_arg_print(va_list arg_list)
{
	char *str = va_arg(arg_list, char *);
	int count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	write(1, str, count);
}


