#include "monty.h"
/**
 * _push - function that pushes an element to the stack.
 * @h: pointer to the head of the stack
 * @times: Number of the current line.
 * Return: Nothing it is a void function.
 */
void _push(stack_t **h, unsigned int times)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		_free(new);
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if(!tools.numbers && tools.numbers != 0)
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", times);
		_free(*h);
		free(new);
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
