#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * @h: the link list
 * Return: num of elements
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
