#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c, i, j, a[10][10], count = 0;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("\nSparse Matrix (row col value):\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] != 0)
            {
                printf("%d %d %d\n", i, j, a[i][j]);
                count++;
            }

    printf("\nNon-zero elements: %d\n", count);

    printf("\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
