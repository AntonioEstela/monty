#include "monty.h"
/**
 * add_dnodeint_end - Function that adds a new node at the end of a DLL.
 * @head: Pointer to the head of the double linked list.
 * @n: number to add in the node.
 * Return: Nothing it is a void function.
 */
void add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *new;
	stack_t *list = (*head);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		_free(new);
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		new->prev = NULL;
		(*head) = new;
	}

	while (list->next != NULL)
	{
		list = list->next;
	}
	list->next = new;
	new->prev = list;
}
/**
 * add_dnodeint - Function that adds a new node at the beginning of a DLL.
 * @head: Pointer to the head of the double linked list.
 * @n: number to add in the node.
 * Return: Nothing it is a void function.
 */
void add_dnodeint(stack_t **head, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		_free(new);
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	new->n = n;
	new->prev = NULL;
	new->next = (*head);

	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}

	*head = new;
}
/**
 * get_int_at_index - Function that returns the nth node of a DLL.
 * @head: Pointer to the head of the double linked list.
 * @index: Is the index of the node, starting from 0.
 * Return: NULL if the node at index position doesn't exitst or the node.
 */
int get_int_at_index(stack_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return ('\0');

	while (i < index)
	{
		if (head->next == NULL)
			return ('\0');

		head = head->next;
		i++;
	}
	return (head->n);
}
/**
 * delete_nodeint_at_index - Function that deletes the node at index of a DLL.
 * @head: Pointer to the head of the double linked list.
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: Nothing it is a void function.
 */
void delete_nodeint_at_index(stack_t **head, unsigned int index)
{
	stack_t *list = (*head);
	unsigned int i;

	if (*head == NULL || head == NULL)
		return;

	for (i = 0; list != NULL; i++)
	{
		if (i == index)
		{
			if (list->prev)
				list->prev->next = list->next;
			if (list->next)
				list->next->prev = list->prev;
			if (*head == list)
				(*head) = list->next;
			free(list);
			return;
		}
		list = list->next;
	}
}
