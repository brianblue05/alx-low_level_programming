#include "main.h"
#include <stidio.h>
/**
 * @c: character to be checked
 * _isupper - checks if c is uppercase
 * Return: Returns 1 or 0
 */
int _isupper(int c)
{
	if(c >='A' && c<='Z')
	{
		return (1);
	}
	return (0);
}

