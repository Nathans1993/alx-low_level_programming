#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of the list
 * @head: pointer to a pointer to a linked list
 * @n: constant for integer input
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;
	*head = n_node;
	return (n_node);
}
