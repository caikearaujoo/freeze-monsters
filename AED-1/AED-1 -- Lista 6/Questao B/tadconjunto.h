#ifndef TADCONJUNTO_H_INCLUDED
#define TADCONJUNTO_H_INCLUDED

typedef struct conjunto conjunto;

conjunto *criar();

void membro(conjunto *c);

void inserir(conjunto *c);

void remover(conjunto *c);

conjunto *uniao(conjunto *c1, conjunto *c2);

conjunto *interseccao(conjunto *c1, conjunto *c2);

conjunto *diferenca(conjunto *c1, conjunto *c2);

void exibe(conjunto *c);

#endif // TADCONJUNTO_H_INCLUDED
