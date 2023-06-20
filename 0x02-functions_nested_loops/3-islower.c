#include "main.h"
/**
* _islower - function that checks for lowercase character
*
*@c: is an ASCII character
*
* Return: int type
*/
int _islower(int c)
{

	if (!(c >= 'a' && c <= 'z'))
		return (0);
	else
		return (1);

	_putchar('\n');
}
