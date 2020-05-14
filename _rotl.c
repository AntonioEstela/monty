#include "monty.h"
/**
 * 
 * 
 */
void _rotl(stack_t **h, unsigned int times)
{
	stack_t *list = *h;
	int tmp;

	if (*h == NULL || h == NULL)
		exit(EXIT_FAILURE);
	
	tmp = list->n;
	add_dnodeint_end(h, tmp);
	_pop(h, times);
}