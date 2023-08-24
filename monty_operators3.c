#include "monty.h"

/**
* f_pop -this  function prints the top of stack
* @head: double head pointer to the stack
* @counter: line tally
* Return: null
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

/**
* f_pint - this function prints the top of stack
* @head: stack double head pointer
* @counter: line tally
* Return: null
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
* f_nop - this function dat does no thing
* @head: stack double head pointer
* @counter: count line
* Return: null
*/
void f_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
