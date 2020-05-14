#include "monty.h"

void _pop(stack_t **h, unsigned int times)
{
	stack_t *list = *h;

	if (*h == NULL || h == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n", times);
		exit(EXIT_FAILURE);
	}
	(*h) = list->next;
	if (list->next)
		list->next->prev = NULL;

	free(list);
}