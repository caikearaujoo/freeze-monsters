#include <stdio.h>

int main() { 

float p =0;
 float h=0;

   printf("\nDigite seu peso:\n");
    scanf("%f", &p);
    printf("\nDigite sua altura:\n");
    scanf("%f", &h);
if ((h<1.20)&&(p<=60))
{
printf("\nA.");
}
else {
    if ((h>=1.20) && (h<=1.70) && (p<=60))
    {
        printf("\nB.");
    }
    else {
        if ((h>1.70) && (p<=60))
        {
            printf("\nC.");
        }
        else {
            if ((h<1.20) && (p>=60) && (p<=90))
            {
                printf("\nD.");
            }
            else {
                if ((h>=1.20) && (h<=1.70) && (p>=60) && (p<=90))
                {
                    printf("\nE.");
                }
                else {
                    if ((h>=1.7) && (p>=60) && (p<=90))
                    {
                        printf("\nF.");
                    }
                    else {
                        if ((h<1.20) && (p>90))
                        {
                            printf("\nG.");
                        }
                        else {
                            if ((h>=1.2) && (h<=1.7) && (p>90))
                            {
                                printf("\nH.");
                            }
                            else {
                                if ((h>1.7) && (p>90))
                                {
                                    printf("\nI.");
                                }
                                else {
                                    printf("\nValor invalido");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}








return 0;
}
