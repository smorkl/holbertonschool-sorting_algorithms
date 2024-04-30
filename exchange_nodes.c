void swap_nodes(listint_t *node)
{
    // Verifica si hay al menos dos nodos
    if (node != NULL && node->next != NULL) {
        listint_t *prev_node = node->prev;
        listint_t *next_node = node->next;

        // Asigna los punteros prev y next del nodo anterior
        if (prev_node != NULL)
            prev_node->next = next_node;
        // Asigna el puntero prev del nodo siguiente
        if (next_node->next != NULL)
            next_node->next->prev = node;

        // Intercambia los punteros prev y next del nodo y del nodo siguiente
        node->prev = next_node;
        node->next = next_node->next;
        next_node->prev = prev_node;
        next_node->next = node;
    }
}