#include "main.h"

void __putchar(int *ptr, char a)
{	
	write(1, &a, 1);
	ptr++;
}
