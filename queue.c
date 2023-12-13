#include "monty.h"

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
 */
void addqueue(stack_t **head, int n)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        printf("Error\n");
        return;
    }

    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        stack_t *last = *head;
        while (last->next != NULL)
        {
            last = last->next;
        }

        last->next = new_node;
        new_node->prev = last;
    }
}
