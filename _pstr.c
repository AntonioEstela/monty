#include "monty.h"
/**
 * _pstr - function that <prints all the values on the stack.
 * @h: pointer to the head of the stack
 * @times: Number of the current line.
 * Return: Nothing it is a void function.
 */
void _pstr(stack_t **h, unsigned int times __attribute__((unused)))
{
	stack_t *stack = *h;

	while (stack != NULL && (stack->n < 128 || stack->n > 0))
	{
		if (stack->n == 0)
			break;
		printf("%c", stack->n);
		stack = stack->next;
	}
	printf("\n");
}
