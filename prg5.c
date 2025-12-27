#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **a, r, c, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    a = (int **)malloc(r * sizeof(int *));

    for (i = 0; i < r; i++)
        a[i] = (int *)malloc(c * sizeof(int));

    printf("Enter elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("2D array elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    for (i = 0; i < r; i++)
        free(a[i]);
    return 0;
}
