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

struct node* insert(struct node *root, int value)
{
    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->data = value;
        root->left = root->right = NULL;
        return root;
    }

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

/* BFS Traversal (Level Order) */
void bfs(struct node *root)
{
    struct node *temp;

    if (root == NULL)
        return;

    enqueue(root);

    while (front != rear)
    {
        temp = dequeue();
        printf("%d ", temp->data);

        if (temp->left != NULL)
            enqueue(temp->left);
        if (temp->right != NULL)
            enqueue(temp->right);
    }
}

int main()
{
    struct node *root = NULL;
    int n, i, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value);
        root = insert(root, value);
    }

    printf("BFS traversal: ");
    bfs(root);

    printf("\n\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
