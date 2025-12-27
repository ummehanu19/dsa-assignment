#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *n1, *n2;

    n1 = (struct node *)malloc(sizeof(struct node));
    n2 = (struct node *)malloc(sizeof(struct node));

    n1->data = 10;
    n1->next = n2;

    n2->data = 20;
    n2->next = NULL;

    printf("First node data = %d\n", n1->data);
    printf("Second node data = %d\n", n2->data);
    printf("\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    free(n1);
    free(n2);

    return 0;
}
