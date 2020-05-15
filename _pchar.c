#include "monty.h"
/**
 * _pchar - function that prints the char at the top of the stack.
 * @h: pointer to the head of the stack.
 * @times: Number of the current line.
 * Return: Nothing it is a void function.
 */
void _pchar(stack_t **h, unsigned int times)
{
	if (*h == NULL || h == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pchar, stack empty\n", times);
		_free(*h);
		exit(EXIT_FAILURE);
	}
	if ((*h)->n > 127 || (*h)->n < 0)
	{
		dprintf(STDERR_FILENO, "L%d: can't pchar, value out of range\n", times);
		_free(*h);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*h)->n);

}
