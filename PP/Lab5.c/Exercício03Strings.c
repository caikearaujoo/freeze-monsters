#include <stdio.h>
#include <string.h>

int main() {
    char string_palavra[50];
    int tamanho_string, i;
    
    printf("Digite uma palavra: ");
    scanf("%s", string_palavra);
    
    tamanho_string = strlen(string_palavra);
    
    printf("A Palavra digitada ao contrario eh: ");
    for(i = tamanho_string - 1; i >= 0; i--) {
        printf("%c", string_palavra[i]);
    }
    
    return 0;
}
