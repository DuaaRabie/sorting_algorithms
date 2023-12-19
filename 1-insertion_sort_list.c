#include "sort.h"

/**
 * swap_nodes - swap nodes
 * @node1: first node
 * @node2: second node
 * @list: the list to be sorted
 * Return: nothing
 */
void swap_nodes(listint_t *node1, listint_t *node2, listint_t **list)
{
	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node2->next != NULL)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->next = node1;
	node2->prev = node1->prev;
	node1->prev = node2;
}

/**
 * insertion_sort_list - sorts doubly linked list in ascending order
 * @list: the list to be sorted
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node1 = *list, *node2;
	bool restart = false;

	if (node1 != NULL && node1->next != NULL)
	{

		node2 = node1;
		while (node2 && node2->next && !restart)
		{
			if (node2->n > node2->next->n)
			{
				swap_nodes(node2, node2->next, list);
				print_list(*list);
				restart = true;
			}
			node2 = node2->next;
		}
		node1 = node1->next;

	}
	if (restart == true)
		insertion_sort_list(list);

}
