#include <stdio.h>

int main() {
  int a, b, i, j, countagem = 0, eh_primo;

  printf("Digite o primeiro numero: ");
  scanf("%d", &a);

  printf("Digite o segundo numero: ");
  scanf("%d", &b);

  for (i = a; i <= b; i++) {
    eh_primo = 1;

    for (j = 2; j <= i/2; j++) {
      if (i % j == 0) {
        eh_primo = 0;
        break;
      }
    }

    if (eh_primo == 1) {
      countagem++;
    }
  }

  printf("Existem %d numeros primos entre %d e %d\n", countagem, a, b);

  return 0;
}
