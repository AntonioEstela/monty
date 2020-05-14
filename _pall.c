#include "monty.h"

void _pall(stack_t **h, unsigned int times __attribute__((unused)))
{
	stack_t *stack = *h;

	while (stack != NULL)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}