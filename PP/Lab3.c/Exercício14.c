#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int d1, d2, n, i;
    srand(time(NULL)); // 

    printf("Digite o número de lançamentos que você deseja: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        d1 = rand() % 6 + 1; 
        d2 = rand() % 6 + 1; 

        printf("Lançamento %d: d1 = %d, d2 = %d, ", i+1, d1, d2);

        if(d1 > d2) {
            printf("d1 > d2\n");
        } else if(d1 < d2) {
            printf("d1 < d2\n");
        } else {
            printf("d1 = d2\n");
        }
    }

    return 0;
}
