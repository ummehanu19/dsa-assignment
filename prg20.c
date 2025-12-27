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
        root->left = NULL;
        root->right = NULL;
        return root;
    }

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
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

    printf("Inorder traversal of BST: ");
    inorder(root);

    printf("\n\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
