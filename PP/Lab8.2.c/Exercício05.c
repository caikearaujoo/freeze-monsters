#include <stdio.h>
#include <string.h>

int main ( )
{
    char string1[50], string2[50];
    char *p_1, *p_2;
    int auxilia = 0;

    printf ("digite a primeira string: ");
    fgets (string1, 50, stdin);
    string1[strcspn(string1, "\n")] = '\0';

    printf ("digite a segunda string: ");
    fgets (string2, 50, stdin);
    string2[strcspn(string2, "\n")] = '\0';

    for (p_1 = string1, p_2 = string2; (*p_1 != '\0') && (*p_2 != '\0'); p_1++)
    {
        while (*p_1 == *p_2)
        {
            p_1++;
            p_2++;

            if (*p_2 == '\0')
            {
                auxilia = 1;
                break;
            } else if (*p_1 != *p_2)
            {
                p_2 = string2;
            }
        }
    }

    if (auxilia == 1)
    {
        printf ("\na segunda string ocorre dentro da primeira");
    } else 
    {
        printf ("\na segunda string nao ocorre dentro da primeira");
    }

    return 0;
}
