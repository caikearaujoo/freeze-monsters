#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int n, tamanho1, tamanho2, i, j;

    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    tamanho1 = strlen(str1);
    tamanho2 = strlen(str2);

    for (i = tamanho1, j = 0; i < 100 && j < n && j < tamanho2; i++, j++) {
        str1[i] = str2[j];
    }

    str1[i] = '\0';

    printf("A string resultante eh: %s\n", str1);

    return 0;
}
