#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->left = temp->right = NULL;
    return temp;
}

void preorder(struct node *root)
{
    if (root)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root)
{
    if (root)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct node *root;

    root = create(10);
    root->left = create(20);
    root->right = create(30);
    root->left->left = create(40);
    root->left->right = create(50);

    printf("Preorder: ");
    preorder(root);

    printf("\nInorder: ");
    inorder(root);

    printf("\nPostorder: ");
    postorder(root);

    printf("\n\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
