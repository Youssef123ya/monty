#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom first
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stack_t **head, unsigned int counter)
{
    stack_t *temp, *last;

    (void)counter;

    if (*head == NULL || (*head)->next == NULL)
        return;

    temp = *head;
    last = *head;

    while (last->next != NULL)
        last = last->next;

    last->prev->next = NULL;
    last->prev = NULL;
    last->next = temp;

    temp->prev = last;

    *head = last;
}
