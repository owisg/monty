#include "monty.h"

/**
 * free_stack_recursive - frees a doubly linked list using recursion
 * @head: head of the stack
 */
void free_stack_recursive(stack_t *head)
{
	if (head == NULL)
		return;

	free_stack_recursive(head->next);
	free(head);
}
