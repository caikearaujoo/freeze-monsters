#include <stdio.h>

int main() {
  int matriz[5][5];
  int x;
  int encontrado = 0; 
  int linha_encontrado, coluna_encontrado;

  printf("Digite os valores da matriz 5x5:\n");
  for(int i = 0; i < 5; i++) 
  {
    for(int j = 0; j < 5; j++) 
    {
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("Digite o valor a ser buscado na matriz: ");
  scanf("%d", &x);

  for(int i = 0; i < 5; i++) 
  {
    for(int j = 0; j < 5; j++) 
    {
      if(matriz[i][j] == x) 
      {
        encontrado = 1;
        linha_encontrado = i;
        coluna_encontrado = j;
        break; 
      }
    }
    if(encontrado) 
    { 
      break;
    }
  }

  if(encontrado) 
  {
    printf("Valor encontrado na linha %d, coluna %d.\n", linha_encontrado, coluna_encontrado);
  } else 
  {
    printf("Valor não encontrado na matriz.\n");
  }

  return 0;
}
