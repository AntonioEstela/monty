#include "monty.h"
/**
 * _pall - function that <prints all the values on the stack.
 * @h: pointer to the head of the stack
 * @times: Number of the current line.
 * Return: Nothing it is a void function.
 */
void _pall(stack_t **h, unsigned int times __attribute__((unused)))
{
	stack_t *stack = *h;

	while (stack != NULL)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}
