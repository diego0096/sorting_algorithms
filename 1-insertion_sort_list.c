#include "sort.h"
/**
 * insertion_sort_list - C function to insert node
 * @list: Double pointer to list of struct listint_t
 * Return: Return sorted list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *Node1 = NULL, *Node2 = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	Node1 = *list;
	while (Node1 != NULL)
	{
		pNode = Node1;
		while (Node2->prev != NULL && Node2->n < Node2->prev->n)
		{
			Node2->prev->next = Node2->next;
			if (Node2->next != NULL)
				Node2->next->prev = Node2->prev;
			Node2->next = Node2->prev;
			Node2->prev = Node2->prev->prev;
			Node2->next->prev = Node2;
			if (Node2->prev == NULL)
				*list = Node2;
			else
				Node2->prev->next = Node2;
			print_list(*list);
		}
		Node1 = Node1->next;
	}
}
