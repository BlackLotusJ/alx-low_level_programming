#include "calc.h"
#include <string.h>
/**
 * get_op_function - selects the correct operation toperform
 * @s: operation to perform
 * Return: pointer to the corect function
 */
int (*get_op_function(char *s))(int, int)
{
	op_t ops [] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_,mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s,ops[i].op) == 0)
			break;
		i++;
	}
	return (ops[i].f);
}
