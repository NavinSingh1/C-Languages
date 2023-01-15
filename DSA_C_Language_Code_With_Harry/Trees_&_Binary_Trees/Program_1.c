// Linked Representation of Binary Trees

#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;                                 // creating a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data;                                 // Setting the data
    n->left = NULL;                                 // Setting the left children to NULL
    n->right = NULL;                                // Setting the right children to NULL
    return n;                                       // Finally returning the created node
}

int main()
{
    // Constructing the root node - using Function (Recommended)
    struct node *p = createNode(2);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(4);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;

    // Printing the value of nodes
    printf("Value of root node is : %d\n", *p);
    printf("Value of left node is : %d\n", *p1);
    printf("Value of right node is : %d\n", *p2);

    return 0;
}