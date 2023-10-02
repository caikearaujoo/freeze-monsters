#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float salario, prestacao;
printf("\nDigite o salario de um trabalhador\n");
scanf("%f",&salario);
printf("\nDigite o valor de uma prestacao do emprestimo\n");
scanf("%f",&prestacao);
if (prestacao> (0.2*salario))
    {
printf("Emprestimo nao concedido");
    }
    else{
    printf("Emprestimo concedido");
     }
return 0;
}
