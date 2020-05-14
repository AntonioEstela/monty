#include "monty.h"
/**
 * 
 * 
 */
void _pchar(stack_t **h, unsigned int times)
{
	if ((*h)->n > 127 || (*h)->n < 0)
	{
		dprintf(STDERR_FILENO, "L%d: can't pchar, value out of range\n", times);
		_free(*h);
		exit(EXIT_FAILURE);
	}
	if (*h == NULL || h == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pchar, stack empty\n", times);
		_free(*h);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*h)->n);

}