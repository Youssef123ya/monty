#include "monty.h"

/**
 * execute - executes the opcode first
 * @stack: head linked list - stack
 * @counter: line_counter
 * @file: pointer to monty file
 * @content: line content
 * Return: no return
 */
void execute(stack_t **stack, unsigned int counter, FILE *file, char *content)
{
	char *token;
	int arg;
	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		/* Add more instructions here */
		{NULL, NULL}
	};

	token = strtok(content, " \n");
	if (token == NULL || token[0] == '#')
		return;

	if (strcmp(token, "push") == 0)
	{
		token = strtok(NULL, " \n");
		if (token == NULL || !is_number(token))
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			exit(EXIT_FAILURE);
		}
		arg = atoi(token);
	}

	int i = 0;

	while (instructions[i].opcode != NULL)
	{
		if (strcmp(token, instructions[i].opcode) == 0)
			break;
		i++;
	}

	if (instructions[i].opcode != NULL)
		instructions[i].f(stack, counter);
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, token);
		exit(EXIT_FAILURE);
	}
}
