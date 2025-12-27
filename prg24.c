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

void enqueue(struct node *x)
{
    queue[++rear] = x;
}

struct node* dequeue()
{
    return queue[++front];
}

struct node* insert(struct node *root, int x)
{
    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->data = x;
        root->left = root->right = NULL;
        return root;
    }
    if (x < root->data)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);

    return root;
}

void levelorder(struct node *root)
{
    struct node *temp;
    enqueue(root);

    while (front != rear)
    {
        temp = dequeue();
        printf("%d ", temp->data);

        if (temp->left)
            enqueue(temp->left);
        if (temp->right)
            enqueue(temp->right);
    }
}

int main()
{
    struct node *root = NULL;
    int n, i, x;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        root = insert(root, x);
    }

    printf("Level Order Traversal: ");
    levelorder(root);

    printf("\n\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
