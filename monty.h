#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

#define DELIMITERS " \t\n\r"
#define STACK 1
#define QUEUE 0

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
 * struct gbl - some useful things.
 * @namefile: name of the file to read.
 * @nimbers: numbers to add to the stack.
 * @buffer: the line read by getline.
 * @com: opcode selected.
 * Description: some useful things.
 */
typedef struct glb
{
        FILE *namefile;
        char *numbers;
        char *buffer;
        char *com;
        int mode;
}tool;

int get_int_at_index(stack_t *head, unsigned int index);
void delete_nodeint_at_index(stack_t **head, unsigned int index);
void add_dnodeint_end(stack_t **head, const int n);
void op_func(int times, char *option, stack_t **h);
void add_dnodeint(stack_t **head, const int n);
void _queue(stack_t **h, unsigned int times);
void _stack(stack_t **h, unsigned int times);
void _pchar(stack_t **h, unsigned int times);
void _split(char *buffer, char *delimiters);
void _pstr(stack_t **h, unsigned int times);
void _push(stack_t **h, unsigned int times);
void _pall(stack_t **h, unsigned int times);
void _pint(stack_t **h, unsigned int times);
void _swap(stack_t **h, unsigned int times);
void _rotl(stack_t **h, unsigned int times);
void _rotr(stack_t **h, unsigned int times);
void _pop(stack_t **h, unsigned int times);
void _add(stack_t **h, unsigned int times);
void _nop(stack_t **h, unsigned int times);
void _sub(stack_t **h, unsigned int times);
void _div(stack_t **h, unsigned int times);
void _mul(stack_t **h, unsigned int times);
void _mod(stack_t **h, unsigned int times);
int stack_len(stack_t *h);
int _isdigit(char *str);
void _free(stack_t *h);

extern tool tools;

#endif /*  MONTY_H */
