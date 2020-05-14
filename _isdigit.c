#include "monty.h"
/**
 * _isdigit - function that checks if a number is a int ot not.
 * @str: string to check.
 * Return: 1 if the str is number or 0 otherwhise.
 */
int _isdigit(char *str)
{
	int i;

	if (!(str))
		return (0);

	i = str[0] == '-' ? 1 : 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}
