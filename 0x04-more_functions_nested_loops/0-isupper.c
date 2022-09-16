#include <stdio.h>
#include "main.h"

/**
*_isupper - check if a character is uppercase or not
*@c: character to be tested
*Return: 1 whether it is, 0 otherwis
*/

int _isupper(int c)
{
	if ((c >= "A") && (c <= "Z"))
	{
		return (1);
	}
	
	return (0);
}
