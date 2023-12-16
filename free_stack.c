#include "monty.h"

/**
 * free_stack_recursive - frees a doubly linked list using recursion
 * @head: head of the stack
 */
void free_stack(stack_t *head)
{
	if (head == NULL)
		return;

	free_stack(head->next);
	free(head);
}
