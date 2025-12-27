#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int *ptr;

    ptr = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", (void *)&a);
    printf("Address stored in pointer ptr = %p\n", (void *)ptr);
    printf("Address of pointer ptr = %p\n", (void *)&ptr);

    printf("\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
