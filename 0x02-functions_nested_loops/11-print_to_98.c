#include <stdio.h>
/**
 * print_to_98 - ptints all natural number frominput to 98,
 *		in order seperated by a comma followed by a space
 * @n: number to start counting from
 * Return: success
 */
void print_to_98(int n)
{
	if (n >= 98)

	{
		while (n > 98)
			printf("%d," n--);
		printf("%d\n", n);
	}
	
	else
	{
		while (n < 98)
			printf("%d," n++);
		printf("%d, " n);
	}
}
