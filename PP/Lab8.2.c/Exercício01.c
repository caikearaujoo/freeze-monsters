#include <stdio.h>
int main ()
{
    float vet[10];
    int i;
    float *p;
    p = vet;
    for (i=0; i<10; i++)
    {
        p = &vet[i];
        printf("\nPosicao de memoria do elemento de numero %d do vetor: %p\n", i ,(p+i));
    }
    return 0;
}
