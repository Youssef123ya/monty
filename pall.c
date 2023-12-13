#include "monty.h"
/**
 * f_pall - prints the stack only
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
    stack_t *temp = *head;

    (void)counter;

    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
    }
}
