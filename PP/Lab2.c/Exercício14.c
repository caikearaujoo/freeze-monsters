#include <stdio.h>
#include <math.h>

int main() {
    float lab=0;
    float avaliacao_semestral=0;
    float exame_final=0;

    printf("\nDigite a nota do trabalho de laboratorio:");
    scanf("%f", &lab);
     printf("\nDigite a nota da avaliacao semestral:");
    scanf("%f", &avaliacao_semestral);
     printf("\nDigite a nota do exame final:");
    scanf("%f", &exame_final);
    
    float media_ponderada = (((2*lab)+(3*avaliacao_semestral)+(5*exame_final))/10);
    
    if ((media_ponderada<=2.9) && (media_ponderada>=0))
    {
        printf("\nO aluno esta reprovado");
    }
    else 
    {
        if ((media_ponderada>=3) && (media_ponderada<=4.9))
        {
            printf("\nO aluno esta de recuperacao.");
        }
        else {
            if ((media_ponderada>=5) && (media_ponderada <= 10))
            {
                printf("\nO aluno foi aprovado");
            }
            else{
                printf("\nOs valores sao invalidos");
            }
        }
    }
return 0;
}
