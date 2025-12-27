#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff, pow;
    struct node *next;
};

struct node* insert(struct node *head, int c, int p)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->coeff = c;
    temp->pow = p;
    temp->next = NULL;

    if (head == NULL)
        return temp;

    struct node *ptr = head;
    while (ptr->next != NULL)
        ptr = ptr->next;

    ptr->next = temp;
    return head;
}

void display(struct node *head)
{
    struct node *p = head;

    while (p != NULL)
    {
        printf("%dx^%d", p->coeff, p->pow);
        if (p->next != NULL)
            printf(" + ");
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct node *poly = NULL;

    poly = insert(poly, 3, 2);
    poly = insert(poly, 5, 1);
    poly = insert(poly, 6, 0);

    printf("Polynomial: ");
    display(poly);

    /* System MAC Address at the END */
    printf("\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}

