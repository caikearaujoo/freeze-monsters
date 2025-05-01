#include <stdio.h>
#include <math.h>

int main() {
    int idade=0;
    int anos=0;
    printf("\nDigite quantos anos tem o trabalhador:");
    scanf("%d", &idade);
    printf("\nDigite quantos anos ele trabalhou (tempo de servico):");
    scanf("%d", &anos);
    if (idade>=65)
    {
        printf("\nPode se aposentar.");
    }
    else 
    {
        if (anos>=30) 
        {
            printf("\nPode se aposentar.");
        }
        else 
        {
            if ((idade>=60) && (anos>=25))
            {
                printf("\nPode se aposentar.");
            }
            else {
                printf("\nNao pode se aposentar.");
            }
        }
    }

return 0;
}
