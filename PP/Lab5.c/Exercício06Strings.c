#include <stdio.h>

int main() {
    char string[100];
    int i = 0;

    printf("Digite uma cadeia de caracteres: ");
    scanf("%s", string);

  for(i = 0; string[i] != '\0'; i++) 
    {
        if (string[i] >= 'a' && string[i] <= 'z') 
        {
            string[i] -= 32;
        }
    }

    printf("Cadeia de caracteres em maiuscula: %s", string);

    return 0;
}
