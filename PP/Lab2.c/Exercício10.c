#include <stdio.h>

int main() {
    float h, peso_ideal;
    char sexo;

    printf("\nDigite seu sexo (M/F):");
    
    scanf("%c", &sexo);
    printf("\nDigite sua altura (em metros):");
    scanf("%f", &h);
    

    if (sexo =='M')
    {
        peso_ideal= (72.7 * h) - 58.0;
    }
    else 
    {
        if (sexo =='F')
        {
            peso_ideal= (62.1 * h) - 44.7;
        }
        else 
        {
            printf("\nSexo invalido");
            return 1;
        }
    }
    printf("O peso ideal para uma pessoa de %.2f m de altura e sexo %c eh: %.2f kg\n", h, sexo, peso_ideal);



return 0;
}




