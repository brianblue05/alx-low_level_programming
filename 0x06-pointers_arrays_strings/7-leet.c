#include "main.h"

/**
 * leet - leet
 * @s: string
 *
 * Return: char value
 */

char *leet(char *s)
{
	int n = 0, i;
	int lower_case_letters[] = {97, 101, 111, 116, 108};
	int upper_case_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + n) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + n) == lower_case_letters[i] || *(s + n) == upper_case_letters[i])
			{
				*(s + n) = numbers[i];
				break;
			}
		}
		n++;
	}
	return (s);
}
