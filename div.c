#include "monty.h"
/**
 * f_div - divides the top two elements of the stack first .
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_div(stack_t **head, unsigned int counter)
{
    int quotient;
    stack_t *temp;

    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't div, stack too short\n", counter);
        exit(EXIT_FAILURE);
    }

    if ((*head)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", counter);
        exit(EXIT_FAILURE);
    }

    quotient = (*head)->next->n / (*head)->n;
    temp = *head;
    *head = (*head)->next;
    (*head)->prev = NULL;
    free(temp);

    (*head)->n = quotient;
}
