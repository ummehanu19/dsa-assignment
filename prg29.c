#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_end(int x) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;

    if (head == NULL)
        head = temp;
    else {
        struct node *p = head;
        while (p->next)
            p = p->next;
        p->next = temp;
    }
}

void insert_middle(int pos, int x) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;

    struct node *p = head;
    for (int i = 1; i < pos - 1 && p; i++)
        p = p->next;

    temp->next = p->next;
    p->next = temp;
}

void delete_middle(int pos) {
    struct node *p = head;
    for (int i = 1; i < pos - 1 && p; i++)
        p = p->next;

    struct node *q = p->next;
    p->next = q->next;
    printf("Deleted: %d\n", q->data);
    free(q);
}

void display() {
    struct node *p = head;
    printf("List: ");
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    insert_end(10);
    insert_end(20);
    insert_end(40);
    insert_end(50);

    insert_middle(3, 30);
    display();

    delete_middle(3);
    display();

    printf("\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
