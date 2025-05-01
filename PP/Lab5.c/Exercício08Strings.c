#include <stdio.h>
#include <string.h>

int main() {
    char str[100], L1, L2;
    int i;

    printf("Digite uma string: ");
    gets(str);

    printf("Digite a letra que deseja substituir: ");
    scanf("%c", &L1);

   setbuf(stdin, NULL);

    printf("Digite a letra que irá substituir a letra %c: ", L1);
    scanf("%c", &L2);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == L1) {
            str[i] = L2;
        }
    }

    printf("Nova string: %s\n", str);

    return 0;
}
