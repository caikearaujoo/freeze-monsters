#include <stdio.h>

struct Data 
{
    int dia;
    int mes;
    int ano;
};

struct Compromisso 
{
    char descricao[61];
    struct Data data;
};

int main() {
    struct Compromisso agenda[5];
    int i;

    for (i = 0; i < 5; i++) 
    {
        printf("Digite a descrição do compromisso %d: ", i + 1);
        fgets(agenda[i].descricao, 61, stdin);
        
        printf("Digite a data do compromisso %d (DD MM AAAA): ", i + 1);
        scanf("%d %d %d", &agenda[i].data.dia, &agenda[i].data.mes, &agenda[i].data.ano);
        getchar(); 
    }

    int mes, ano;
    
    do 
    {
        printf("\nDigite o mês (ou 0 para sair): ");
        scanf("%d", &mes);

        if (mes != 0) {
            printf("Digite o ano: ");
            scanf("%d", &ano);

            printf("\nCompromissos do mês %d do ano %d:\n", mes, ano);

            for (i = 0; i < 5; i++) 
            {
                if (agenda[i].data.mes == mes && agenda[i].data.ano == ano) 
                {
                    printf("- Compromisso: %s", agenda[i].descricao);
                    printf("  Data: %d/%d/%d\n", agenda[i].data.dia, agenda[i].data.mes, agenda[i].data.ano);
                }
            }
        }
    } while (mes != 0);

    return 0;
}
