#include "lists.h"
/**
 * print_listint_t - prints linked list elements
 * Return: number of elements
 */
size_t print_list(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 1;

	while (current != NULL)
	{
		printf("%lu",current -> n);
		current = current -> next;
		count++;
	}
	return (count);
}
