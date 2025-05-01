#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, tamanho;
    int palindromo = 1; // 

    printf("Digite uma string: ");
    scanf("%s", str);

    tamanho = strlen(str);

    for (i = 0, j = tamanho - 1; i < tamanho/2; i++, j--) {
        if (str[i] != str[j]) {
            palindromo = 0; 
            break;
        }
    }

    if (palindromo) {
        printf("%s eh um palindromo\n", str);
    } else {
        printf("%s nao eh um palindromo\n", str);
    }

    return 0;
}
