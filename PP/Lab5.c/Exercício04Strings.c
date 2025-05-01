#include <stdio.h>

int main() 
{
    char palavra[50], caractere;
    int i, vogais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("A palavra digitada foi: %s\n", palavra);

    for (i = 0; palavra[i] != '\0'; i++) 
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ||
            palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') 
        {
            vogais++;
        }
    }

    printf("A palavra possui %d vogais.\n", vogais);

    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &caractere);

    for (i = 0; palavra[i] != '\0'; i++) 
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ||
            palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') 
        {
            palavra[i] = caractere;
        }
    }

    printf("A palavra resultante eh: %s\n", palavra);

    return 0;
}
