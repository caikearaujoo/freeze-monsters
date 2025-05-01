int main() {
    int n, qntd, num = 1;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
   
    for (qntd = 1; qntd < n; qntd++) {
        printf("%d\n", num);
        num += 2;
    }
     printf("Os %d primeiros numeros naturais impares sao:\n", n);
    return 0;
}
