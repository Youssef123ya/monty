#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack first,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
    stack_t *temp = *head;

    (void)counter;

    while (temp != NULL && temp->n != 0)
    {
        if (temp->n < 0 || temp->n > 127)
        {
            fprintf(stderr, "Invalid character in stack\n");
            exit(EXIT_FAILURE);
        }
        printf("%c", temp->n);
        temp = temp->next;
    }
    printf("\n");
}
