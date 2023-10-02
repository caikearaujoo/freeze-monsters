#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("\nDigite um valor inteiro:");
    scanf("%d", &n);
    if ((n%3 == 0) && (n%5 != 0))
    {
        printf("\nO numero eh divisivel apenas por 3 e nao por 5.");
    }
    else 
    {
        if ((n%5 == 0) && (n%3 != 0))
        {
            printf("\nO numero eh divisivel apenas por 5 e nao por 3.");
        }
        else{
            printf("\nO numero nao eh divisivel nem por 5 nem por 3 ou eh divisel pelos dois simultaneamente e nao serve.");
        }
    }
return 0;
}
