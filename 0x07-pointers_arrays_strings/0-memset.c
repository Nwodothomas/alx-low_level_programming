#include "main.h"

/**
 *_memset - fills a memory block with a constant bytes
 * @s: address to memory block
 * @b: character to be used
 * @n: number of bytes to be used
 * 
 * Return: pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (;n > 0; i++)
	{
		s[n-1] = b;
		n--;
	}
	return (s);
}
