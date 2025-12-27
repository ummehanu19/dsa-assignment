#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    if (a == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted elements:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    free(a);
    return 0;
}
