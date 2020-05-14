#include "monty.h"
/**
 * _pint - function that prints the value at the top of the stack.
 * @h: pointer to the head of the stack
 * @times: Number of the current line.
 * Return: Nothing it is a void function.
 */
void _pint(stack_t **h, unsigned int times)
{
	if (h == NULL || *h == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", times);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*h)->n);

}
