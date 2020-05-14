#include "monty.h"
/**
 * _add - function that adds the top two elements of the stack.
 * @h: pointer to the head of the stack
 * @times: Number of the current line.
 * Return: Nothing it is a void function.
 */
void _add(stack_t **h, unsigned int times)
{
	stack_t *list = *h;
	int len = stack_len(*h);

	if (len < 2)
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n", times);
		_free(*h);
		exit(EXIT_FAILURE);
	}

	list->next->n += list->n;

	_pop(h, times); /* Removing the top item of the stack */
}
