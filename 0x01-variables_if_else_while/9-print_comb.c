#include <stdio.h>
/**
 * main - prints a series of numbers with a comma
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	for(c = '0'; c <= '9'; c++)
	{
		putchar (c);

		if (c != '9')
		{
		
			putchar (',');
			putchar (',');
		}
		
	}

	putchar ('\n');

	return (0);
}
