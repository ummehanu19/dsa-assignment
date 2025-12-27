#include <stdio.h>
#include <stdlib.h>

struct node {
    int row, col, val;
    struct node *next;
};

struct node* insert(struct node *head, int r, int c, int v) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->row = r;
    temp->col = c;
    temp->val = v;
    temp->next = NULL;

    if (head == NULL)
        return temp;

    struct node *p = head;
    while (p->next != NULL)
        p = p->next;
    p->next = temp;

    return head;
}

void display(struct node *head) {
    struct node *p = head;
    printf("\nSparse Matrix Representation (Row  Col  Value):\n");
    while (p != NULL) {
        printf("%d   %d    %d\n", p->row, p->col, p->val);
        p = p->next;
    }
}

int main() {
    int r, c, i, j;
    struct node *head = NULL;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] != 0)
                head = insert(head, i, j, a[i][j]);
        }
    }

    display(head);

    printf("\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
