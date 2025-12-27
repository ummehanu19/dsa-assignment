#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int cq[SIZE];
int front = -1, rear = -1;

int isFull() {
    return (front == (rear + 1) % SIZE);
}

int isEmpty() {
    return (front == -1);
}

void enqueue(int x) {
    if (isFull()) {
        printf("Queue is FULL\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear = (rear + 1) % SIZE;
    cq[rear] = x;
    printf("%d inserted\n", x);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue is EMPTY\n");
        return;
    }
    printf("%d deleted\n", cq[front]);
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
}

void display() {
    if (isEmpty()) {
        printf("Queue is EMPTY\n");
        return;
    }

    printf("Circular Queue: ");
    int i = front;
    while (i != rear) {
        printf("%d ", cq[i]);
        i = (i + 1) % SIZE;
    }
    printf("%d\n", cq[rear]);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();
    dequeue();

    display();

    enqueue(60);
    enqueue(70);

    display();

    enqueue(80);

    printf("\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
