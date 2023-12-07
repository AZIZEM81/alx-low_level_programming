#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @list_head: list_t list to be freed
 */
void free_list(list_t *list_head)
{
	list_t *current_node;

	while (list_head)
	{
		current_node = list_head->next;
		free(list_head->str);
		free(list_head);
		list_head = current_node;
	}
}

