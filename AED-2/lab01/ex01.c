#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Alunos: Caike Cesar Mota de Araújo
int main ()
{
    {
        int i;
        int *v, *aux;

        srand(time(NULL));
        time_t ini;
        time_t fim;
        double tempo_total;

        v = (int*) malloc (10000*sizeof(int));
        aux = (int*) malloc (10000*sizeof(int));

        for(i=0; i<10000; i++)
        {
            v[i] = rand() % 100;
            aux[i] = v[i];
        }


        ini = clock();
        bubbleSort(v, 10000);
        fim = clock();
        tempo_total = (double) (fim-ini)/CLOCKS_PER_SEC;
        printf("\nBubbleSort = %f", tempo_total);

        for(i=0; i<10000; i++)
        {
            v[i] = aux[i];
        }

        ini = clock();
        insertionSort(v, 10000);
        fim = clock();
        tempo_total = (double) (fim-ini)/CLOCKS_PER_SEC;
        printf("\nInsertion Sort = %f", tempo_total);

        for(i=0; i<10000; i++)
        {
            v[i] = aux[i];
        }

        ini = clock();
        selectionSort(v, 10000);
        fim = clock();
        tempo_total = (double) (fim-ini)/CLOCKS_PER_SEC;
        printf("\nSelection Sort = %f", tempo_total);

        for(i=0; i<10000; i++)
        {
            v[i] = aux[i];
        }

        ini = clock();
        Shellsort(v, 10000);
        fim = clock();
        tempo_total = (double) (fim-ini)/CLOCKS_PER_SEC;
        printf("\nShellSort = %f", tempo_total);

      free(v);
      free(aux);

        return 0;
}

}

void bubbleSort(int vetor[], int tam)
{
    int temp, i, j;
    for (i = 0; i < tam ; i++)
    {
        for (j = 0; j < tam - 1 - i; j++)
        {
            if (vetor[j+1] < vetor[j])
            {
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

void selectionSort(int vetor [], int n)
{
    int temp;
    int menor, i, j;
    for (i = 0; i < n - 1; i++)
    {
        menor = i;
        for (j = i + 1; j < n; j++)
        {
            if (vetor[j] < vetor[menor])
            {
                menor = j;
            }
        }
        temp = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = temp;
    }
}

void insertionSort (int vet[], int n)
{
    int i,j, tmp;
    for (i=1 ; i < n ; i++)
    {
        tmp = vet[i];
        vet[j+1] = tmp;
    }
}

void Shellsort(int vetor [], int n)
{
    int i, j, h = 1;
    int aux;
    do
    {
        h = h * 3 + 1;
    }
    while (h < n);
    do
    {
        h /= 3;
        for(i = h ; i < n ; i++)
        {
            aux = vetor[i];
            j = i;
            while (vetor[j - h] > aux)
            {
                vetor[j] = vetor[j - h];
                j -= h;
                if (j < h)
                    break;
            }
            vetor[j] = aux;
        }
    }
    while (h != 1);
}
