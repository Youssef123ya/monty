#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
    int result = 0;

    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "Error: Insufficient elements in stack for subtraction\n");
        exit(EXIT_FAILURE);
    }

    result = (*head)->next->n - (*head)->n;

    *head = (*head)->next;
    free((*head)->prev);
    (*head)->prev = NULL;

    (*head)->n = result;
}
