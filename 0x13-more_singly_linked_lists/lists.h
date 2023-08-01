#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * listint_s - singly linked list
 * @n: node element
 * @next: poiter to next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
}listint_t;

size_t print_listint(const listint_t *h);
#endif/*_LISTS_H*/
