#include "monty.h"
/**
 * 
 * 
 */
void _mul(stack_t **h, unsigned int times)
{
	stack_t *list = *h;
	int len = stack_len(*h);

	if (len < 2)
	{
		dprintf(STDERR_FILENO, "L%d: can't mul, stack too short\n", times);
		_free(*h);
		exit(EXIT_FAILURE);
	}

	list->next->n *= list->n;

	_pop(h, times); /* Removing the top item of the stack */
}