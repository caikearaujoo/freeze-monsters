int main() {
    int codigo, quantidade;
    float preco;

    printf("Digite o código do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch(codigo) {
        case 100:
            preco = 1.2;
            break;
        case 101:
            preco = 1.3;
            break;
        case 102:
            preco = 1.5;
            break;
        case 103:
            preco = 1.2;
            break;
        case 104:
            preco = 1.7;
            break;
        case 105:
            preco = 2.2;
            break;
        case 106:
            preco = 1.0;
            break;
        default:
            printf("Código inválido!\n");
            return 0;
    }

    printf("Total a pagar: R$%.2f\n", preco * quantidade);
    
    return 0;
}
