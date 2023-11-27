#define LISTS_H
#ifndef LISTS_H

#include <stdlib.h>

/**
 * struct listint_t - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked last node structure
 *
 */
typedef struct listint_t
{
	int n;
	struct listint_t *next;
}	listint_t;

int check_cycle(listint_t *list);
size_t print_listint(const listint_t *h);
void free_listint(listint_t *head);
listint_t *add_nodeint(listint_t **head, const int n);

#endif /* LISTS_H */
