#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    // allocate memory for the new node
    listint_t *new_node = malloc(sizeof(listint_t));

    // check if malloc() failed to allocate memory
    if (!new_node) {
        return NULL;
    }

    // set the data for the new node
    new_node->n = n;

    // point the new node to the current first node in the list
    new_node->next = *head;

    // point the head pointer to the new node
    *head = new_node;

    // return a pointer to the new node
    return new_node;
}
