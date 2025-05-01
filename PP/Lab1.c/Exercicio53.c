
int main() {
    float c, l, p, custo;
    
    printf("Digite o comprimento do terreno em metros: ");
    scanf("%f", &c);
    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &l);
    printf("Digite o preco do metro de tela (em reais): ");
    scanf("%f", &p);
    
    custo = 2 * (c + l) * p;

    printf("O custo para cercar o terreno com tela sera de R$ %f.\n", custo);
    
    return 0;
}
