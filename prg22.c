#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

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

/* DFS using Preorder Traversal */
void dfs(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        dfs(root->left);
        dfs(root->right);
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

    printf("DFS traversal: ");
    dfs(root);

    printf("\n\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
