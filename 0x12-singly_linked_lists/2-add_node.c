#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the pointer to the first node of the list.
 * @str: String to be duplicated.
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = 0; // Changed int to size_t

	while (str[len] != '\0')
	{
		len++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len; // Updated the variable name
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
