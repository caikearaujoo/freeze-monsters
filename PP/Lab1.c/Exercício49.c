#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1, m1, s1, h2, m2, s2, h3, m3, s3, duracao, tempo, resto;

    printf("Digite, nessa ordem, em que horas, em que minutos e em que segundos o experimento comecou:\n");
    scanf("%d %d %d", &h1, &m1, &s1);

    printf("Digite a duracao do experimento, em segundos:\n");
    scanf("%d", &duracao);

    tempo=duracao%3600; 
    h2=duracao/3600; 
    m2=tempo/60; 
    s2=tempo%60; 

    s3=(s2+s1)%60; 
    m3=(m2+m1+(s2+s1)/60)%60;
    
    h3=(h2+h1+(m2+m1+(s2+s1)/60)/60)%24;

    printf("Esse experimento acabou %d(h):%d(min):%d(s), %d dia(s) depois", h3, m3, s3, (h2+h1+(m2+m1+(s2+s1)/60)/60)/24);
    return 0;
}
