#include "monty.h"
/**
 * _split - function that splits the args given by getline.
 * @buffer: The buffer.
 * @delimiters: delimiters to split the buffer.
 * Return: Nothing it is a void function.
 */
void _split(char *buffer, char *delimiters)
{
	tools.com = strtok(buffer, delimiters);
	tools.numbers = strtok(NULL, delimiters);
}
