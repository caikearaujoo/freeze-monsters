#include <stdio.h>

#define MAX_CARACTERES 30

struct Funcionario {
    char nome[MAX_CARACTERES];
    int idade;
    char sexo;
    char cpf[12];
    char dataNascimento[11];
    int codigoSetor;
    char cargo[MAX_CARACTERES];
    float salario;
};

int main() {
    struct Funcionario funcionario;

    printf("Digite os dados do funcionário:\n");
    printf("Nome: ");
    scanf("%s", funcionario.nome);
    printf("Idade: ");
    scanf("%d", &funcionario.idade);
    printf("Sexo (M/F): ");
    scanf(" %c", &funcionario.sexo);
    printf("CPF: ");
    scanf("%s", funcionario.cpf);
    printf("Data de Nascimento (DD/MM/AAAA): ");
    scanf("%s", funcionario.dataNascimento);
    printf("Código do Setor (0-99): ");
    scanf("%d", &funcionario.codigoSetor);
    printf("Cargo: ");
    scanf("%s", funcionario.cargo);
    printf("Salário: ");
    scanf("%f", &funcionario.salario);

    printf("\nDados do funcionário:\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %s\n", funcionario.cpf);
    printf("Data de Nascimento: %s\n", funcionario.dataNascimento);
    printf("Código do Setor: %d\n", funcionario.codigoSetor);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salário: %.2f\n", funcionario.salario);

    return 0;
}
