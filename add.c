#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *current;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	current->next->n += current->n;
	*head = current->next;
	free(current);
}

