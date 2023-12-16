#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top
 * @head: Stack head
 * @counter: Line number
 * Return: No return
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
    stack_t *last = *head;

    if (*head == NULL || (*head)->next == NULL)
    {
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = *head;
    (*head)->prev = last;
    *head = (*head)->next;
    (*head)->prev = NULL;
    last->next->next = NULL;
}
