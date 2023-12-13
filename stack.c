#include "monty.h"
/**
 * f_stack - prints the top first
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_stack(stack_t **head, unsigned int counter)
{
    stack_t *temp = *head;

    (void)counter;

    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
    }
}
