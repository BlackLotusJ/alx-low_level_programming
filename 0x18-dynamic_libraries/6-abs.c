#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _abs -  function that computes the absolute value of an integer
 *
 * @r: ASCII character
 *
 * Return: int data type
 */
int _abs(int r)
{
	if (r > 0)
		return (r);
	else if (r < 0)
		return (-r);
	else
		return (r);
}
