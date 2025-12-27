#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *queue[20];
int front = -1, rear = -1;

void enqueue(struct node *temp)
{
    queue[++rear] = temp;
}

struct node* dequeue()
{
    return queue[++front];
}

int main()
{
    int n, i;
    struct node *root = NULL, *temp, *newnode;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    if (n <= 0)
        return 0;

    root = (struct node *)malloc(sizeof(struct node));
    printf("Enter root value: ");
    scanf("%d", &root->data);
    root->left = root->right = NULL;

    enqueue(root);

    for (i = 1; i < n; i++)
    {
        temp = dequeue();

        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter left child of %d: ", temp->data);
        scanf("%d", &newnode->data);
        newnode->left = newnode->right = NULL;
        temp->left = newnode;
        enqueue(newnode);

        if (++i < n)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter right child of %d: ", temp->data);
            scanf("%d", &newnode->data);
            newnode->left = newnode->right = NULL;
            temp->right = newnode;
            enqueue(newnode);
        }
    }

    printf("\nRoot node: %d\n", root->data);
    printf("Left child of root: %d\n", root->left->data);
    printf("Right child of root: %d\n", root->right->data);

    printf("\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
