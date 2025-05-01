#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin); 

    int tamanho = strlen(frase);
    char nova_frase[tamanho]; 

    int i, j = 0;
    for (i = 0; i < tamanho; i++) 
    {
        if (frase[i] != ' ') 
        { 
            nova_frase[j] = frase[i]; 
            j++;
        }
    }
    nova_frase[j] = '\0'; 

    printf("Nova frase: %s\n", nova_frase); 

    return 0;
}
