#include <stdio.h>
/**
 * main - print possible combination of 3
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i, p, m;

	for (i = 0; i <= 9; i++)
	{
		for (p = 1; p <= 9; p++)
		{
			for (m = 2; m <= 9; m++)
			{

			if (m > p && p > i)
			{
				putchar (i + '0');
				putchar (i + '0');
				putchar (i + '0');
			
				if (i != 7)
				{
					putchar(',');
					purchar(',')
				}
			}
			}
		}
	}

	putchar ('\n');

	return(0);
}
