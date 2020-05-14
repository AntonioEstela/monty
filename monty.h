#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define DELIMITERS " \t\n\r"

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * 
 * 
 * 
 * 
 * 
 */
typedef struct glb
{
        FILE *namefile;
        char *numbers;
        char *buffer;
        char *com;
}tool;

void _split(char *buffer, char *delimiters);
void op_func(int times, char *option, stack_t **h);
void _free(stack_t *h);
void _push(stack_t **h, unsigned int times);
void _pall(stack_t **h, unsigned int times);
void _pint(stack_t **h, unsigned int times);
void _swap(stack_t **h, unsigned int times);
void _pop(stack_t **h, unsigned int times);
void _add(stack_t **h, unsigned int times);
void _nop(stack_t **h, unsigned int times);
int stack_len(stack_t *h);

extern tool tools;

#endif /*  MONTY_H */