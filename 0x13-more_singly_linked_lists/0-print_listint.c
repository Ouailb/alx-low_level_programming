
#include "lists.h"

size_t print_listint(const listint_t *h)
{
    size_t node_count = 0;
    const listint_t *current_node = h;

    while (current_node != NULL)
    {
        printf("%d\n", current_node->n);
        current_node = current_node->next;
        node_count++;
    }

    return node_count;
}



