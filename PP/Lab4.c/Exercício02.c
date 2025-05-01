#include <stdio.h>
#include <stdlib.h>

int calendario (int dias, int meses, int anos);
int main ()
{     
int dias, meses, anos;
printf("\nEscreva uma data no formato: DD/MM/AA. ");
scanf("%d%d%d", &dias,&meses,&anos );
int calendario (int dias, int meses, int anos);
{ 
switch (meses)
{
    case (1):
    printf("\n%d de janeiro de %d  ", dias, anos); break;
     case (2):
    printf("\n%d de fevereiro de %d  ", dias, anos); break;
     case (3):
    printf("\n%d de marco de %d  ", dias, anos); break;
     case (4):
    printf("\n%d de abril de %d  ", dias, anos); break;
     case (5):
    printf("\n%d de maio de %d  ", dias, anos); break;
     case (6):
    printf("\n%d de junho de %d  ", dias, anos); break;
     case (7):
    printf("\n%d de julho de %d  ", dias, anos); break;
     case (8):
    printf("\n%d de agosto de %d  ", dias, anos); break;
     case (9):
    printf("\n%d de setembro de %d  ", dias, anos); break;
     case (10):
    printf("\n%d de outubro de %d  ", dias, anos); break;
     case (11):
    printf("\n%d de novembro de %d  ", dias, anos); break;
     case (12):
    printf("\n%d de dezembro de %d  ", dias, anos); break;
    default: printf("\nA data não é válida");
}
}
return 0;
}
