#include "monty.h"

void _pop(stack_t **stack, unsigned int times)
{
	stack_t *list = *stack;

	if (*stack == NULL || stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pop an empty stack", times);
		exit(EXIT_FAILURE);
	}
	(*stack) = list->next;
	if (list->next)
		list->next->prev = NULL;

	free(list);
}