#include <stdio.h>
#include <string.h>

int main()
{
    char String[100];
    int i, j;
    
    printf("Digite uma string: ");
    scanf("%s", String);
    
    printf("Digite o valor de i: ");
    scanf("%d", &i);
    
    printf("Digite o valor de j: ");
    scanf("%d", &j);
    
    if (i < 0 || j < 0 || i > j || j >= strlen(String)) 
    {
        printf("Intervalo invalido\n");
        return 1;
    }
    
    for (int k = i; k <= j; k++) {
        printf("%c", String[k]);
    }
    printf("\n");
    
    return 0;
}
