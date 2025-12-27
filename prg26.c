#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, *b, i;

    a = (int *)malloc(4 * sizeof(int));
    b = (int *)calloc(4, sizeof(int));

    for (i = 0; i < 4; i++)
        a[i] = 0;

    printf("Values using malloc():\n");
    for (i = 0; i < 4; i++)
        printf("%d ", a[i]);

    printf("\n\nValues using calloc():\n");
    for (i = 0; i < 4; i++)
        printf("%d ", b[i]);

    printf("\n\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
