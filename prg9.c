#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b;

    b = --a;
    printf("After pre-decrement:\n");
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    a = 5;

    b = a--;
    printf("After post-decrement:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
printf("\nSystem MAC Address:\n\n");
system("getmac");
printf("\n");

    return 0;
}
