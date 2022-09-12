#include <stdio.h>
/**
 * main - prints a series of numbers with a comma
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = '48'; n = '57'; n++)
	{
		putchar (n);

		if (n == '57')
		{
			break;
		}
			putchar (',');
			putchar ('');
		
	}

	putchar ('\n');

	return (0);
}
