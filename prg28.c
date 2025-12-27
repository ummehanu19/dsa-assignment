#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s1[100], s2[100];
    int result;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    result = strcmp(s1, s2);

    if (result == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    printf("\nSystem MAC Address:\n\n");
    system("getmac");
    printf("\n");

    return 0;
}
