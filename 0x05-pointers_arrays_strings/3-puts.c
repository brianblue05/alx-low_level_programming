#include "main.h"
#include "2-strlen.c"
/**
 * _puts - Printing a string
 * @str: string to print
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
