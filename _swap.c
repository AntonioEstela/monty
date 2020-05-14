#include "monty.h"

void _swap(stack_t **h, unsigned int times)
{
	stack_t *list = *h;
	int tmp, len = stack_len(*h);

	if (len < 2)
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", times);
		exit(EXIT_FAILURE);
	}

	tmp = list->n;
	list->n = list->next->n;
	list->next->n = tmp;

}