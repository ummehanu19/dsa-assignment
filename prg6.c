#include <stdio.h>
#include <string.h>

int main()
{
    char text[100], pattern[50];
    int i, j, tlen, plen, found = 0;

    printf("Enter the text: ");
    gets(text);

    printf("Enter the pattern: ");
    gets(pattern);

    tlen = strlen(text);
    plen = strlen(pattern);

    for (i = 0; i <= tlen - plen; i++)
    {
        for (j = 0; j < plen; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == plen)
        {
            printf("Pattern found at position %d\n", i + 1);
            found = 1;
        }
    }

    if (found == 0)
        printf("Pattern not found\n");

    return 0;
}
