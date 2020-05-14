#include "monty.h"

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
