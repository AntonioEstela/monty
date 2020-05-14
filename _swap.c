#include "monty.h"
/**
 * _swap - function that swaps the top two elements of the stack.
 * @h: pointer to the head of the stack
 * @times: Number of the current line.
 * Return: Nothing it is a void function.
 */
void _swap(stack_t **h, unsigned int times)
{
	stack_t *list = *h;
	int tmp, len = stack_len(*h);

	if (len < 2)
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", times);
		_free(*h);
		exit(EXIT_FAILURE);
	}

	tmp = list->n;
	list->n = list->next->n;
	list->next->n = tmp;

}
