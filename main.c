#include "monty.h"
tool tools = {NULL, NULL, NULL, NULL, STACK};
/**
 * main - Program that interprets bytecode (.m) and execute opcode
 * @argc: number of arguments.
 * @argv: Arguments passed to the program.
 * Return: 0 on success or exit with code 1.
 */
int main(int argc, char **argv)
{
	ssize_t n_chars;
	size_t bfsize; /* This is empty because the getline will modify it */
	int line = 1;
	stack_t *head = NULL;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	tools.namefile = fopen(argv[1], "r");

	if (tools.namefile == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((n_chars = getline(&tools.buffer, &bfsize, tools.namefile)) != EOF)
	{
		_split(tools.buffer, DELIMITERS);
		if (tools.com != NULL && tools.com[0] != '#')
			op_func(line, tools.com, &head);
		line++;
	}
	_free(head);
	return (0);
}
