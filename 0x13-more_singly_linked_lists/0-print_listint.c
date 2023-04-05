#include <stdio.h>
#include "lists.h"

/**
 * desc: a pointer to the head of the list_t list
 * write a function that prints all the elements
 * @: listint_t list.*
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
	nodes++;
	printf("%int\n", h->n);
	h = h->next;

}
return (nodes);
}
