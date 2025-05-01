#include<stdio.h>
#include <math.h>
int tempo (int h, int m, int s);
int main ()
{
    int horas;
    int minutos;
    int segundos;
    int resposta;
    printf("\nDigite o tempo no formato: horas:minutos:segundos\n");
    scanf ("%d%d%d", &horas, &minutos, &segundos);
    
    resposta = tempo (horas, minutos, segundos);
    
    printf("\nO tempo digitado, em segundos eh: %d", resposta);

return 0;
}
int tempo (int h, int m, int s)
{
    if ((h >= 0) && (h<=23) && (m >= 0) && (m<=59) && (s>=0) && (s<60))
    {
    h = h*3600;
    m = m * 60;
    int segundos_finais = h + m + s;
    return segundos_finais;
    }
    else {
    printf("\nValores invalidos.");
    return 0;
    }
}
