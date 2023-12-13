#include "monty.h"
/**
 * f_queue - prints the top first
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
    (void)head;
    (void)counter;
}
/**
 * addqueue - add node to the tail stack first
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(int n, stack_t **head)
{
    stack_t *new_node, *temp;

    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }
}
