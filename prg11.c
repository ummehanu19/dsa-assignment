#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert()
{
    struct node *newnode;
    int value;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter value to insert: ");
    scanf("%d", &value);

    newnode->data = value;
    newnode->next = head;
    head = newnode;

    printf("Node inserted\n");
}

void delete()
{
    struct node *temp;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    temp = head;
    head = head->next;
    printf("Deleted element: %d\n", temp->data);
    free(temp);
}

void traverse()
{
    struct node *temp;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    temp = head;
    printf("Linked list elements:\n");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n1.Insert  2.Delete  3.Traverse  4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        if (ch == 4)
            break;

        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            delete();
            break;

        case 3:
            traverse();
            break;

        default:
            printf("Invalid choice\n");
        }
    }

    /* MAC Address printed at the END */
    printf("\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
