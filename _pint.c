#include "monty.h"

void _pint(stack_t **h, unsigned int times)
{
	if(h == NULL || *h == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", times);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*h)->n);

}
