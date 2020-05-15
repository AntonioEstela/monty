#include "monty.h"
/**
 * _stack - function that sets the format of the data to a stack (LIFO).
 * @h: pointer to the head of the stack
 * @times: Number of the current line.
 * Return: Nothing it is a void function.
 */
void _stack(stack_t **h, unsigned int times)
{
	(void)h;
	(void)times;
	tools.mode = STACK;
}
/**
 * _queue - function that sets the format of the data to a queue (FIFO).
 * @h: pointer to the head of the stack
 * @times: Number of the current line.
 * Return: Nothing it is a void function.
 */
void _queue(stack_t **h, unsigned int times)
{
	(void)h;
	(void)times;
	tools.mode = QUEUE;
}
