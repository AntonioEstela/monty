#include "monty.h"
/**
 * _push - function that pushes an element to the stack.
 * @h: pointer to the head of the stack
 * @times: Number of the current line.
 * Return: Nothing it is a void function.
 */
void _push(stack_t **h, unsigned int times)
{

	if (_isdigit(tools.numbers) == 1)
	{
		if (tools.mode == STACK)
		{
			add_dnodeint(h, atoi(tools.numbers));
		}
		else if (tools.mode == QUEUE)
		{
			if (*h == NULL || h == NULL)
				add_dnodeint(h, atoi(tools.numbers));
			else
				add_dnodeint_end(h, atoi(tools.numbers));
		}
	}
	else
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", times);
		_free(*h);
		exit(EXIT_FAILURE);
	}

}
