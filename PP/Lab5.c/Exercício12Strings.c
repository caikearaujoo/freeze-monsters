#include <stdio.h>
#include <string.h>

void codificacao_cesar(char s[]);

int main() {
    char str[1000];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    codificacao_cesar(str);

    printf("String cifrada: %s", str);

    return 0;
}
void codificacao_cesar(char s[]) 
{
    int i;
    for(i = 0; i < strlen(s); i++) 
    {
        if(s[i] >= 'A' && s[i] <= 'Z') 
        {
            s[i] = ((s[i] - 'A' + 3) % 26) + 'A';
        }
        else if(s[i] >= 'a' && s[i] <= 'z') 
        {
            s[i] = ((s[i] - 'a' + 3) % 26) + 'a';
        }
    }
}
