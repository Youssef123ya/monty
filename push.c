#include "monty.h"
/**
 * f_push - add node to the stack first
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int counter)
{
    stack_t *new_node;

    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = counter;
    new_node->prev = NULL;

    if (*head != NULL)
        (*head)->prev = new_node;

    new_node->next = *head;
    *head = new_node;
}
