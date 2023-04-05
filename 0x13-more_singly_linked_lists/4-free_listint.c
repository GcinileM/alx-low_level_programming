#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
    // create a temporary node to hold the next node to be freed
    listint_t *temp;

    // loop through the linked list while there are still nodes to be freed
    while (head) {
        // save the next node in the list before freeing the current node
        temp = head->next;

        // free the current node
        free(head);

        // set the head pointer to the next node in the list
        head = temp;
    }
}
