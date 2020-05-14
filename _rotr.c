#include "monty.h"
/**
 * 
 * 
 */
void _rotr(stack_t **h, unsigned int times)
{
	stack_t *list = *h;
	int tmp;
	int len;
	(void)times;

	if (*h == NULL || h == NULL)
		return;

	len = stack_len(*h) - 1;

	tmp = get_int_at_index(list, len);

	delete_nodeint_at_index(h, len);

	add_dnodeint(h, tmp);	
}