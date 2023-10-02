#include <stdio.h>
#include <stdlib.h>

int main()
{
   char operador;
   float calculo, n1, n2;
   do
   {
       printf("\nEscolha a opcao de calculo desejada: ");
       printf("\n+");
       printf("\n-");
       printf("\n*");
       printf("\n/");
       printf("\n");
       scanf(" %c", &operador);
   }while((operador != '+') && (operador != '-') && (operador != '*') && (operador != '/'));

   printf("\nDigite um valor: ");
   scanf("%f", &n1);
   printf("\nDigite outro valor para a operacao: ");
   scanf("%f", &n2);
   if (operador == '/' && n2 == 0)
   {
       printf("\nNao eh possivel dividir por zero.");
       return 0;
   }
   switch(operador)
   {
        case '+':
            calculo = n1 + n2;
            break;
        case '-':
            calculo = n1 - n2;
            break;
        case '*':
            calculo = n1 * n2;
            break;
        case '/':
            calculo = n1/n2;
            break;
   }
   printf("\nO resultado do calculo realizado eh: %.2f", calculo);
   return 0;
}
