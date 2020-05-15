#include "monty.h"
/**
 * _rotl - function that rotates the stack to the top.
 * @h: pointer to the head of the stack
 * @times: Number of the current line.
 * Return: Nothing it is a void function.
 */
void _rotl(stack_t **h, unsigned int times)
{
	stack_t *list = *h;
	int tmp;

	if (*h == NULL || h == NULL)
		return;

	tmp = list->n;
	add_dnodeint_end(h, tmp);
	_pop(h, times);
}
