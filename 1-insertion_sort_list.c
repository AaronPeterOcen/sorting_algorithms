#include "sort.h"

/**
 * insertion_sort_list - sort a linked list with insertion sort
 * @list: a linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp1, *tmp2, *a1, *a2;
	int flag;

	if (list)
	{
		tmp1 = *list;
		tmp2 = *list;
		while (list && tmp1->next)
		{
			if (tmp1->next)
			{
				flag = 0;
				tmp2 = tmp1;
				while (tmp2 && tmp2->n > tmp2->next->n)
				{
					a1 = tmp2;
					a2 = tmp2->next;
					a1->next = a2->next;
					if (a2->next)
						a2->next->prev = a1;
					if (a2)
					{
						a2->prev = a1->prev;
						a2->next = a1;
					}
					if (a1)
						a1->prev = a2;
					if (a2->prev)
						a2->prev->next = a2;
					tmp2 = a2->prev;
					if (!a2->prev)
						*list = a2;
					print_list(*list);
					flag = 1;
				}
			}
			if (flag == 0)
				tmp1 = tmp1->next;
		}
	}
}
