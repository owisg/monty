#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_mod(stack_t **head, unsigned int counter)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    if ((*head)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n %= (*head)->n;
    *head = pop_stack(*head);
}

/**
 * pop_stack - pops the top element of the stack
 * @head: stack head
 * Return: new head of the stack
 */
stack_t *pop_stack(stack_t *head)
{
    if (head == NULL)
        return NULL;

    if (head->next != NULL)
    {
        head->next->prev = NULL;
        head = head->next;
    }
    free(head->prev);
    return head;
}
