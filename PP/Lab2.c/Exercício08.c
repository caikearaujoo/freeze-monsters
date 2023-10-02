#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float n1,n2;
printf("\nDigite uma nota do aluno entre 0.0 e 10.0\n");
scanf("%f",&n1);
printf("\nDigite outra nota do aluno entre 0.0 e 10.0\n");
scanf("%f",&n2);
if (n1<0 || n1>10)
    {
printf("Os valores sao invalidos");
    }
    else{
    if (n2<0 || n2>10)
    {
    printf("Os valores sao invalidos");
    }
    else
    {
    float n3=(n1+n2)/2;
    printf("A média das notas eh %f", n3);
    }
     }
return 0;
}
