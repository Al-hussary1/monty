#include "monty.h"

/**
 * pall - print values on stack, starting from top of stack
 * @head: head pointer
 *@line_number: node number
 *Return: nothing
 */
void pall(stack_t **head, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (head == NULL)/*account for empty stack*/
	{
		dprintf(STDERR_FILENO, "L%d: invalid stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	while (temp != NULL)/*print data in stack*/
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
