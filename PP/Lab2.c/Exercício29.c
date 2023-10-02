#include <stdio.h>

int main() { 

int acertos =0;
int resposta=0;

   printf("\nBem vindo a prova de soma de numeros entre 1 e 100.\n");
    printf("\nQuestao 1: 6+10:\n");
    scanf("%d", &resposta);
   
    if (resposta == 16)
    {
        printf("A resposta esta certa");
        acertos++;
    }
    else 
    {
        printf("A resposta esta errada, a correta eh 16.");
    }
    
    printf("\nQuestao 2: 26+14:\n");
    scanf("%d", &resposta);
    if (resposta == 40)
    {
        printf("A resposta esta certa");
        acertos++;
    }
    else 
    {
        printf("A resposta esta errada, a correta eh 40.");
    }
    
    printf("\nQuestao 3: 2+8:\n");
    scanf("%d", &resposta);
    if (resposta == 10)
    {
        printf("A resposta esta correta");
        acertos++;

    }
    else 
    {
        printf("A resposta esta errada, a correta eh 10.");
    }

    printf("\nQuestao 4: 68+12:\n");
    scanf("%d", &resposta);

    if (resposta == 80)
    {
        printf("A resposta esta certa");
        acertos++;
    }
    else 
    {
        printf("A resposta esta errada, a correta eh 80.");
    }

   printf("\nQuestao 5: 94+6:\n");
    scanf("%d", &resposta);

    if (resposta == 100)
    {
        printf("A resposta esta certa");
        acertos++;

    }
    else 
    {
        printf("A resposta esta errada, a correta eh 100.");
    }
    printf("\nO seu total de acertos foi %d", acertos);

   return 0;
}
