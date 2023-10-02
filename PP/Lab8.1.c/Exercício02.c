#include <stdio.h>
int main ()
{
    int inteiro;
    float real;
    char caracter;
    int *p_i = &inteiro;
    float *p_r = &real;
    char *p_c = &caracter;

    printf("\nDigite o valor do inteiro: ");
    scanf("%d", &inteiro);
    printf("\nDigite o valor do real: ");
    scanf("%f", &real);
    printf("\nDigite um caracter: ");
    setbuf(stdin,NULL);
    scanf(" %c", &caracter);
    printf("%d %f %c", inteiro, real, caracter);

    printf("\nDigite o novo valor do inteiro: ");
    scanf("%d", p_i);
    printf("\nDigite o novo valor do real: ");
    scanf("%f", p_r);
    printf("\nDigite um novo caracter: ");
    setbuf(stdin,NULL);
    scanf(" %c", p_c);

    printf("%d %f %c", inteiro, real, caracter);
    return 0;
}
