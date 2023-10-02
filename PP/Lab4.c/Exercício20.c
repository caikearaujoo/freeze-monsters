#include <stdio.h>

int eh_primo(int n);
int quantidade_de_primos(int n);

int main() {
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    printf("A quantidade de numeros primos antes desse numero sera: %d", quantidade_de_primos(num));

    return 0;
}

int eh_primo(int n) {
    int contador;
    if (n <= 1) {
        return 0;
    }
    for (contador = 2; contador <= n/2; contador++) 
    {
        if (n % contador == 0) {
            return 0;
        }
    }
    return 1;
}

int quantidade_de_primos(int n) {
    int contador, qntdcontador = 0;
    for (contador = 2; contador <= n; contador++) {
        if (eh_primo(contador)) {
            qntdcontador++;
        }
    }
    return qntdcontador-1;
} //O -1 serve pois são os números primos ANTES do número que o usuário deseja, ou seja, excluindo o próprio número.
