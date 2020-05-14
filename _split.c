#include "monty.h"

void _split(char *buffer, char *delimiters)
{
	tools.com = strtok(buffer, delimiters);
	tools.numbers = strtok(NULL, delimiters);
}