#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tree[10], n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 1; i <= n; i++)
        scanf("%d", &tree[i]);

    printf("\nBinary tree using array:\n");
    for (i = 1; i <= n; i++)
        printf("%d ", tree[i]);

    printf("\n\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
