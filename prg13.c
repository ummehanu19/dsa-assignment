#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue()
{
    struct node *newnode;
    int value;

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Queue Overflow\n");
        return;
    }

    printf("Enter element to insert: ");
    scanf("%d", &value);

    newnode->data = value;
    newnode->next = NULL;

    if (front == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }

    printf("Element inserted\n");
}

void dequeue()
{
    struct node *temp;

    if (front == NULL)
    {
        printf("Queue Underflow\n");
        return;
    }

    temp = front;
    printf("Deleted element: %d\n", temp->data);
    front = front->next;

    if (front == NULL)
        rear = NULL;

    free(temp);
}

void display()
{
    struct node *temp;

    if (front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    temp = front;
    printf("Queue elements:\n");
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
        printf("\n1.Enqueue  2.Dequeue  3.Display  4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        if (ch == 4)
            break;

        switch (ch)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        default:
            printf("Invalid choice\n");
        }
    }

    /* System MAC Address at the END */
    printf("\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
