#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push()
{
    struct node *newnode;
    int value;

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Stack Overflow\n");
        return;
    }

    printf("Enter value to push: ");
    scanf("%d", &value);

    newnode->data = value;
    newnode->next = top;
    top = newnode;

    printf("Element pushed\n");
}

void pop()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }

    temp = top;
    printf("Popped element: %d\n", temp->data);
    top = top->next;
    free(temp);
}

void display()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    temp = top;
    printf("Stack elements:\n");
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
        printf("\n1.Push  2.Pop  3.Display  4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        if (ch == 4)
            break;

        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
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
