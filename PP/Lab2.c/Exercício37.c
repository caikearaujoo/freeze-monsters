#include <stdio.h>
#include <math.h>

int main() {
    int hora_chegada, min_chegada, hora_partida, min_partida, total_min_chegada, total_min_partida, total_horas, total_minutos;
    float preco;

    printf("Informe a hora e o minuto de chegada (horas::minutos: ");
    scanf("%d %d", &hora_chegada, &min_chegada);

    printf("Informe a hora e o minuto de partida (horas:minutos): ");
    scanf("%d %d", &hora_partida, &min_partida);

    total_min_chegada = hora_chegada * 60 + min_chegada;
    total_min_partida = hora_partida * 60 + min_partida;

    if (total_min_partida < total_min_chegada) {
        total_min_partida += 24 * 60;
    }
    total_minutos = total_min_partida - total_min_chegada;
    total_horas = ceil(total_minutos / 60.0); 

    if (total_horas <= 2) {
        preco = total_horas * 1.0;
    } else if (total_horas <= 4) {
        preco = 2.0 + (total_horas - 2) * 1.4;
    } else {
        preco = 4.8 + (total_horas - 4) * 2.0;
    }

    printf("Tempo total estacionado: %d horas e %d minutos\n", total_horas, total_minutos % 60);
    printf("Preco a ser pago: R$ %.2f\n", preco);

    return 0;
}
