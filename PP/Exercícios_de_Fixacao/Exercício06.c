#include <stdio.h>
#include <string.h>

int main ()
{
    FILE *fp;
    char nome[30];
    int nota1, nota2, nota3, media;

    fp = fopen ("notas.txt", "r");
    while (fscanf(fp, "%s %d %d %d", nome, &nota1, &nota2, &nota3) == 4)
    {
        media = (nota1 + nota2 + nota3)/3;
        if (media >= 6)
        {
            printf("\n%s: %d --- ALUNO APROVADO", nome, media);
        }
        else 
        {
            printf("\n%s: %d --- ALUNO REPROVADO", nome, media);
        }
    }

    fclose (fp);
    return 0;
}
