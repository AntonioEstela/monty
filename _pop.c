#include "monty.h"
/**
 * _pop - function that removes the top element of the stack.
 * @h: pointer to the head of the stack
 * @times: Number of the current line.
 * Return: Nothing it is a void function.
 */
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
