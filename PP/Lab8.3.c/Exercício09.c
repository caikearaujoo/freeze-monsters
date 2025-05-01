#include <stdio.h>
#include <stdio.h>

int main()
{
    int vet[5] = {1, 2, 3, 4, 5}; 
    int *p = vet; 

    for (int i = 0; i < 5; i++)
    {
        (*p)++; 
        p++; 
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
