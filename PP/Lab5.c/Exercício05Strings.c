#include <stdio.h>

int main() 
{
    char string[100];
    int i;

    printf("Digite uma string em letras maiusculas: ");
    scanf("%s", string);

    for(i = 0; string[i] != '\0'; i++) 
    {
        if(string[i] >= 65 && string[i] <= 90) 
        { 
            string[i] = string[i] + 32; 
        }
    }

    printf("String convertida para minusculas: %s\n", string);

    return 0;
}
