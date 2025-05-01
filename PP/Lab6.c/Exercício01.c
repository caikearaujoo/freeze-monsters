#include <stdio.h>

struct Horario 
{
    int hora;
    int minutos;
    int segundos;
};

struct Data 
{
    int dia;
    int mes;
    int ano;
};

struct Compromisso 
{
    struct Data data;
    struct Horario horario;
    char texto[100];
};

