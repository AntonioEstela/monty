#include "monty.h"
/**
 * stack_len - Function that returns the number of nodes in a stack.
 * @h: Pointer to the head of the stack.
 * Return: The number of nodes.
 */
int stack_len(stack_t *h)
{
	int number_of_elements;
	stack_t *list = (stack_t *)h;

	for (number_of_elements = 0; list != NULL; number_of_elements++)
	{
		list = list->next;
	}

	return (number_of_elements);
}
