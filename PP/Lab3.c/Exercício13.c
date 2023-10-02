#include <stdio.h>

int main() {
    int contador=0;
    int n=15;
    for (contador=1;contador<1000;contador++) {
        if ((n % 3==0) && (n % 5==0))
        {
            printf("\n%d", n);    
        }
        n++;
    }
}
