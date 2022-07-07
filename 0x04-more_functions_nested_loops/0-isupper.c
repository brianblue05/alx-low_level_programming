#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * @c: character to be checked
 * _isupper - checks if c is uppercase
 * Return: Returns 1 or 0
 */
int _isupper(int c)
{
    char c;

    c = 'C';
    printf("Return value when uppercase character %c is passed to isupper(): %d", c, isupper(c));
    printf("\nReturn value when another character %c is passed to is isupper(): %d", c, isupper(c));

   return 0;
}

