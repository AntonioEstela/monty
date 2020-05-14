#include "monty.h"
/**
 * _free - function that clean the stack.
 * @h: pointer to the head of the stack.
 * Return: Nothing it is a void function.
 */
void _free(stack_t *h)
{
	stack_t *next;

	while (h != NULL)
	{
		next = h->next;
		free(h);
		h = next;
	}
	fclose(tools.namefile);
	free(tools.buffer);
}
