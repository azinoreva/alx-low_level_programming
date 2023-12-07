#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * Entry point: size_t print_dlistint
 *
 * success: 0
 */

size_t print_dlistint(const dlistint_t *h) {
    size_t i;
    for (i = 0; h != NULL; i++) {
        printf("%d\n", h->n); 
        h = h->next;
    }
return i;
}
