#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack first.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int counter)
{
    stack_t *temp;

    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "Error: Insufficient elements in stack for swapping\n");
        exit(EXIT_FAILURE);
    }

    temp = (*head)->next;
    (*head)->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = *head;

    temp->prev = NULL;
    temp->next = *head;

    (*head)->prev = temp;
    *head = temp;
}
