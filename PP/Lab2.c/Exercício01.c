#include <stdio.h>
#include <stdlib.h>

int main()
{
float n1,n2;
n1=0;
n2=0;
printf("\nDigite um numero");
scanf("%f",&n1);
printf("\nDigite outro numero");
scanf("%f",&n2);
if (n1>n2)
{
  printf("\n%f é maior que %f", n1,n2)  ;
}
else{
    if(n2>n1)
    {
    printf("\n%f é maior que %f,", n2,n1);
    }
    else {
    printf("\nOs numeros %f e %f sao iguais",n1,n2);
    }
}

return 0;
}
