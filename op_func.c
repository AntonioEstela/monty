#include "monty.h"
/**
 * op_func - function that checks for a opcode and execute it.
 * @h: pointer to the head of the stack
 * @times: Number of the current line.
 * @option: the opcode read.
 * Return: Nothing it is a void function.
 */
void op_func(int times, char *option, stack_t **h)
{
	int i = 0;
	instruction_t command[] = {
		{"push", _push},
		{"pall", _pall},
		{"pop", _pop},
		{"pint", _pint},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{"stack", _stack},
		{"queue", _queue},
		{NULL, NULL}
	};
	for (; command[i].opcode; i++)
	{
		if (strcmp(command[i].opcode, option) == 0)
		{
			command[i].f(h, times);
			break;
		}
	}

	if (command[i].opcode == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", times, option);
		_free(*h);
		exit(EXIT_FAILURE);
	}

}
