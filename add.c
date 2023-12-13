#include "monty.h"
/**
 * f_add - adds the top two elements of the stack first.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
    int sum;
    stack_t *temp;

    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
        exit(EXIT_FAILURE);
    }

    sum = (*head)->n + (*head)->next->n;
    temp = *head;
    *head = (*head)->next;
    (*head)->prev = NULL;
    free(temp);

    (*head)->n = sum;
}
