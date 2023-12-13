#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack first.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n *= (*head)->n;
    f_pop(head, counter);
}
