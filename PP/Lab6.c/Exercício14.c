#include <stdio.h>
#include <string.h>

struct Carro {
    char marca[16];
    int ano;
    float preco;
};

int main() {
    struct Carro carros[5];

    float p;
    int encontrado = 0;

    printf("Digite os dados dos carros:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Carro %d:\n", i+1);
        printf("Marca: ");
        fgets(carros[i].marca, 15, stdin);
        printf("Ano: ");
        scanf("%d", &carros[i].ano);
        printf("Preço: ");
        scanf("%f", &carros[i].preco);
        setbuf(stdin,NULL); 

        carros[i].marca[strcspn(carros[i].marca, "\n")] = '\0';
    }

    do {
        printf("\nDigite o preco: ");
        scanf("%f", &p);

        if (p == 0) {
            break;
        }

        printf("\nCarros com preço menor que %.2f:\n", p);
        for (int i = 0; i < 5; i++) {
            if (carros[i].preco < p) {
                printf("Carro %d:\n", i+1);
                printf("Marca: %s\n", carros[i].marca);
                printf("Ano: %d\n", carros[i].ano);
                printf("Preço: %.2f\n", carros[i].preco);
                encontrado = 1;
            }
        }

        if (!encontrado) 
        {
            printf("Nenhum carro encontrado com preço menor que %.2f\n", p);
        }
    } while (p != 0);

    return 0;
}
