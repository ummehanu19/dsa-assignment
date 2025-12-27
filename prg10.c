#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int x)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)
        front = 0;

    queue[++rear] = x;
    printf("Inserted %d\n", x);
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted %d\n", queue[front++]);
}

void display()
{
    int i;

    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements:\n");
    for (i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main()
{
    int ch, x;

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
            printf("Enter element: ");
            scanf("%d", &x);
            enqueue(x);
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

    printf("\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
