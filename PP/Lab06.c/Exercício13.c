#include <stdio.h>
#include <string.h>

int main() 
{
    char nome[50];
    char endereco[100];
    char dataNascimento[11];
    char cidade[50];
    char cep[9];
    char email[50];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite seu endereço: ");
    fgets(endereco, sizeof(endereco), stdin);

    printf("Digite sua data de nascimento (formato: dd/mm/aaaa): ");
    fgets(dataNascimento, sizeof(dataNascimento), stdin);

    printf("Digite sua cidade: ");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Digite seu CEP: ");
    fgets(cep, sizeof(cep), stdin);

    printf("Digite seu e-mail: ");
    fgets(email, sizeof(email), stdin);

    nome[strcspn(nome, "\n")] = '\0';
    endereco[strcspn(endereco, "\n")] = '\0';
    dataNascimento[strcspn(dataNascimento, "\n")] = '\0';
    cidade[strcspn(cidade, "\n")] = '\0';
    cep[strcspn(cep, "\n")] = '\0';
    email[strcspn(email, "\n")] = '\0';

    int dataValida = 1;
    int cepValido = 1;
    int emailValido = 1;

    if (strlen(dataNascimento) != 10 || dataNascimento[2] != '/' || dataNascimento[5] != '/') 
    {
        dataValida = 0;
    }

    if (strlen(cep) != 8) 
    {
        cepValido = 0;
    }

    int i = 0;
    int contemArroba = 0;
    while (email[i] != '\0') 
    {
        if (email[i] == '@') 
        {
            contemArroba = 1;
            break;
        }
        i++;
    }
    if (!contemArroba) 
    {
        emailValido = 0;
    }

    printf("\n--- Dados Pessoais ---\n");
    printf("Nome: %s\n", nome);
    printf("Endereço: %s\n", endereco);
    printf("Data de Nascimento: %s %s\n", dataValida ? "VÁLIDA" : "INVÁLIDA", dataNascimento);
    printf("Cidade: %s\n", cidade);
    printf("CEP: %s %s\n", cepValido ? "VÁLIDO" : "INVÁLIDO", cep);
    printf("E-mail: %s %s\n", emailValido ? "VÁLIDO" : "INVÁLIDO", email);

    return 0;
}
