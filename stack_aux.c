#include "monty.h"
/**
 * 
 * 
 */
void add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *new;
	stack_t *list = (*head);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		new->prev = NULL;
		(*head) = new;
	}

	while (list->next != NULL)
	{
		list = list->next;
	}
	list->next = new;
	new->prev = list;
}