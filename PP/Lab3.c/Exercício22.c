#include <stdio.h>

int main() {
    int numero1, numero2, produto, maior_palindromo = 0;

    for (numero1 = 100; numero1 <= 999; numero1++) {
        for (numero2 = 100; numero2 <= 999; numero2++) {
            produto = numero1 * numero2;

            int copia_produto = produto, inverso = 0, resto;
            while (copia_produto != 0) {
                resto = copia_produto % 10;
                inverso = inverso * 10 + resto;
                copia_produto /= 10;
            }

            if (produto == inverso && produto > maior_palindromo) {
                maior_palindromo = produto;
            }
        }
    }

    printf("O maior palindromo feito a partir do produto de dois numeros de 3 digitos e: %d", maior_palindromo);

    return 0;
}
