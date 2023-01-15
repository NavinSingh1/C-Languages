// Stack implementation using linked list

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node *top = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while ((ptr != NULL))
    {
        printf("Element = %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack OverFlow\n");
        printf("Stack is Full now\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return n;
    }
}

struct Node *pop(struct Node *tp)
{
    if (isEmpty(tp))
    {
        printf("Stack Underflow\n");
        printf("Stack is Empty now\n");
    }
    else
    {
        struct Node *n = tp;
        top = tp->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{
    top = push(top, 78);
    top = push(top, 79);
    top = push(top, 89);
    linkedlistTraversal(top);
    int element = pop(top);
    printf("Popped Element is %d\n", element);
    linkedlistTraversal(top);
    return 0;
}
