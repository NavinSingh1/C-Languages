// Deletion of a Linked Lists
// Delete the Node at a given value of the linked lists

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Deleting the Node at a given value from the linked list
struct Node *DeleteAtValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first then second nodes
    head->data = 7;
    head->next = second;

    // Link second then third nodes
    second->data = 11;
    second->next = third;

    // Link third then fourth nodes
    third->data = 55;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before Deletion\n");
    linkedList(head);
    head = DeleteAtValue(head, 55);
    printf("Linked list after Deletion\n");
    linkedList(head);

    return 0;
}
