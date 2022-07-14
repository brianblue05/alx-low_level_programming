#include main.h
/**
 * _strcat - concats two arrays
 *
 * @dest: destination of append
 * @src: source array of append
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
	int sA = 0;
	int sB = 0;

	while (*(dest + sA) != '\0')
	{
		sA++;
	}
	while (sB >= 0)
	{
		*(dest + sA) = *(src + sB);
		if (*(src + sB) == '\0')
			break;
		sA++;
		sB++;
	}
	return (dest);
}
