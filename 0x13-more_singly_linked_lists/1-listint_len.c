#include "lists.h"

/**
 * list_length - Returns the number of elements in a linked list.
 * @head Pointer to the head of the linked list.
 * Return - The number of nodes in the linked list.
*/
size_t list_length(const list_t *head)
{
	size_t length = 0;

	for (const list_t *node = head; node != NULL; node = node->next)
	{
	length++;
	}
	return (length);
}

