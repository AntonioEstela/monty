#include "monty.h"

void _push(stack_t **h, unsigned int times)
{
	stack_t *new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		_free(new);
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (tools.numbers)
	{
		new->n = atoi(tools.numbers);
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", times);
		_free(*h);
		free(new);
		exit(EXIT_FAILURE);
	}
	
}