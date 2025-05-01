#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j;

    printf("\nDigite uma string: ");
    setbuf(stdin, NULL);
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                if (str[i] != ' ')
                {
                    printf("\nA letra %c esta se repetindo na frase.", str[i]);
                    break; //Lembrar que o break interno é utilizado para quebrar apenas o segundo for, nao ele inteiro
                }
            }
        }
    }
    return 0;
}
