// Circular Linked List Traversal

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
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
    fourth->next = head;

    linkedListTraversal(head);

    return 0;
}
