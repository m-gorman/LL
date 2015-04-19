#include <stdio.h>
#include <malloc.h>
#include "LL.h"

// Node
typedef struct Node Node;

struct Node
{
  int value;
  Node *next;
};

// Actual list
typedef struct list
{
	Node *head;
	Node *current;
} list;

list* createLinkedList() {
	list *newList = malloc(sizeof(list));
	newList->head = NULL;
	newList->current = NULL;
	return newList;
}

void listInsert(list *List, int value) {
	// allocate space for new node
	Node *newNode = malloc(sizeof(Node));
	newNode->value = value;
	newNode->next = NULL;
	// if first thing we add
	if (List->head==NULL && List->head==NULL) {
		printf("first\n");
		List->head = newNode;
		List->current = newNode;
		newNode->next = NULL;
	} else {
		List->current->next = newNode;
		List->current = newNode;
	}
	printf("Location of current is %d", List->current);
}

void printList(list *List) {
	Node *curr = List->head;
	while (curr) {
		printf("%d", curr->value);
		curr = curr->next;
	}
}

