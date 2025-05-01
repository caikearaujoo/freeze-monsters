int main() {
    float altura_chico = 1.50, altura_ze = 1.10;
    int anos = 0;

    while(altura_ze <= altura_chico) {
        altura_chico += 0.02; 
        altura_ze += 0.03; 
        anos++;
    }

    printf("Serao necessarios %d anos para que Ze seja maior que Chico.\n", anos);

    return 0;
}
