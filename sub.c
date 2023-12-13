#include "monty.h"
/**
  * f_sub - subtraction
  * @head: stack head
  * @counter: line_number
  * Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;

	if (current == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current->next->n -= current->n;

	*head = current->next;
	free(current);
}

