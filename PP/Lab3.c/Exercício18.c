#include <stdio.h>

int main() 
{
    double salario = 2000;
    double aumento = 0.015; 
    int ano;

    for (ano = 1996; ano <= 2023; ano++) 
    {
        salario = salario + (salario * aumento); 
        aumento = aumento * 2; 
    }

    printf("Salario atual do funcionario: %f\n", salario);

    return 0;
}
