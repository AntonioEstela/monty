#include "monty.h"
/**
 * 
 * 
 */
void _rotl(stack_t **h, unsigned int times)
{
	stack_t *list = *h;
	int tmp = list->n;

	add_dnodeint_end(h, tmp);
	_pop(h, times);
}