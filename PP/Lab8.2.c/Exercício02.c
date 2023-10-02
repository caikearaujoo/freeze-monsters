#include <stdio.h>
int main ()
{
    float mat [3][3];
    int i, j;
    float *p;
    p = &mat[0][0];
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            p = &mat[i][j];
            printf("O endereco da posicao (%d,%d) da matriz sera:%p\n",i,j,(p+i));
        }
    }
    return 0;
}
