#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, n, i;
  
    printf("Enter number of elements: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    if (a == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    for (i = 0; i < n; i++)
        a[i] = 0;
    
    printf("Elements after initialization:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);


printf("\nSystem MAC Address:\n\n");
system("getmac");
printf("\n");
    free(a);
    return 0;

}
