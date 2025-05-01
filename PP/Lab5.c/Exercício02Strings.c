#include <stdio.h>

int main() 
{
    char string[100];
    int i, contador = 0;

    printf("Digite uma string: ");
    scanf("%s", string);

    for (i = 0; string[i] != '\0'; i++) 
    {
        if (string[i] == '1') {
            contador++;
        }
    }

    printf("A string digitada tem %d digitos '1'.", contador);

    return 0;
}
