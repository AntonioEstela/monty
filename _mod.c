#include "monty.h"
/**
 * 
 * 
 */
void _mod(stack_t **h, unsigned int times)
{
	stack_t *list = *h;
	int len = stack_len(*h);

	if (len < 2)
	{
		dprintf(STDERR_FILENO, "L%d: can't mod, stack too short\n", times);
		_free(*h);
		exit(EXIT_FAILURE);
	}

	if (list->n == 0)
	{
		dprintf(STDERR_FILENO, "L%d: division by zero\n", times);
		_free(*h);
		exit(EXIT_FAILURE);
	}

	list->next->n = list->next->n % list->n;

	_pop(h, times); /* Removing the top item of the stack */
}