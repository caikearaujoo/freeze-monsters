#include <stdio.h>
#include <math.h>

int main() {
    int n1=0;
    int n2=0;
    int n3=0;

    printf("\nDigite a nota da primeira prova:");
    scanf("%d", &n1);
     printf("\nDigite a nota da segunda prova:");
    scanf("%d", &n2);
     printf("\nDigite a nota da terceira prova:");
    scanf("%d", &n3);
    int media_ponderada = (((1*n1)+(1*n2)+(2*n3))/4);
    if (media_ponderada>=60)
    {
        printf("\nA media do aluno eh %d.\n", media_ponderada);
        printf("\nO aluno foi aprovado.\n");
    }
    else
    {
        printf("\nA media do aluno eh %d.\n", media_ponderada);
        printf("\nO aluno foi reprovado.");
    }
    

return 0;
}
