#include <stdio.h>
#include <math.h>

int main()
{

    int mat[10][10];
    int i,j,quadrado_i,quadrado_j,cubo_i;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i<j)
            {
                mat[i][j] = (2*i)+(7*j);
            } else 
            {
                if(i==j)
                {
                    quadrado_i= pow (i,2);
                    mat[i][j]=(3*quadrado_i) - 1;
                } else {
                    if(i>j){
                        quadrado_j= pow (j,2);
                        cubo_i= pow (i,3);
                        mat[i][j]= (4*cubo_i) - (5*quadrado_j);
                    }
                }
            }
        }
    }

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
