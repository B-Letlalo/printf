#include "main.h"
/**
 * cus_strlen - Just a custom string lenght
 * @str: First operand
 *
 * Description: get lenght of string.
 * Return: len
 */
int cus_strlen(const char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * cus_putchar - Just a custom putchar
 * @c: First operand
 * @count: Second operand
 *
 * Description: print a single charater on std out.
 */
void cus_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

/**
 * cus_puts - Just a custom puts
 * @str: First operand
 * @count: Second operand
 *
 * Description: Print a string on std out
 */
void cus_puts(const char *str, int *count)
{
	write(1, str, cus_strlen(str));
	*count += cus_strlen(str);
}
