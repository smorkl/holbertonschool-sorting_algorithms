#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *head;
    
    node = node->next;
    
    while (node != NULL)
    {
        if (node->n < node->prev->n)
        {
            node = node->next;  
        }
        else
        {
            swap_nodes(node->prev);
        }
        node = node->next;     
    }
}