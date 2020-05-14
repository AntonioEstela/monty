#include "monty.h"

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