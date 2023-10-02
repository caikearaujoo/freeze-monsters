#include <stdio.h>

int potencia(int x, int z);

int main() {
    int x, z;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &z);
    printf("%d elevado a %d = %d.\n", x, z, potencia(x, z));
    return 0;
}
int potencia(int x, int z) 
{
    int i=0;
    int resultado = 1;
    for (i = 0; i < z; i++) 
    {
        resultado = resultado * x;
    }
    return resultado;
}
