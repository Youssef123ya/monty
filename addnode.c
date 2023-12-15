#include "monty.h"
#include <stdlib.h>
/**
 * addnode - add node to the head stack first
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{
    stack_t *new_node = malloc(sizeof(stack_t));

    if (new_node == NULL)
    {
        fprintf(stderr, "Error: Failed to allocate memory for new node\n");
	exit(EXIT_FAILURE);
    }

    new_node->n = n;
    new_node->prev = NULL;

    if (*head == NULL)
    {
        new_node->next = NULL;
    }
    else
    {
        new_node->next = *head;
        (*head)->prev = new_node;
    }

    *head = new_node;
}
