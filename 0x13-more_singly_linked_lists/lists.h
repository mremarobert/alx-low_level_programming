#ifndef _lISTS_
#define _lISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Alx project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct listp_s - singly linked lists 
 * @p: pointers of nodes
 * @next: points to the next node
 *
 * Description: singly linked lists of pointers
 */
typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;

size_t print_listint(const listint_t *h);







#endif
