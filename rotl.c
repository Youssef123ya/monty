#include "monty.h"
/**
  *f_rotl- rotates the stack to the top first
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotl(stack_t **head, unsigned int counter)
{
    stack_t *temp, *last;

    (void)counter;

    if (*head == NULL || (*head)->next == NULL)
        return;

    temp = *head;
    last = *head;

    while (last->next != NULL)
        last = last->next;

    *head = (*head)->next;
    (*head)->prev = NULL;

    temp->prev = last;
    temp->next = NULL;

    last->next = temp;
}
