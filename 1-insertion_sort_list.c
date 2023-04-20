#include "sort.h"

/**
 * insertion_sort_list - sort doubly linked list insertion style
 * @list: list to sort
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL;
	listint_t *current = NULL;

	if ( *list == NULL || list == NULL || (*list)->next == NULL)
		return;

	current = *list;
	current = current->next;
	while (current != NULL)
	{
		while (current->prev != NULL && current->n < (current->prev)->n)
		{
			temp = current;
			if (current->next)
				(current->next)->prev = temp->prev;
			(current->prev)->next = temp->next;
			temp->prev = current->prev;
			temp->next = current;
			if (current->prev)
				(current->prev)->next = temp;
			current->prev = temp;
			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
			current = current->prev;
		}
		current = current->next;
	}
}
