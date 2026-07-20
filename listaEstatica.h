#ifndef listaEstica_h
#define listaEstica_h

#include <stdio.h>

#define TAM_MAX 1000    // número máximo de itens na lista

typedef int TipoItem/   // representa o tipo de elementos da lista

// Estrutura para lista estática
typedef struct {
    TipoItem item[TAM_MAX];
    int primeiro;
    int ultimo;
    int pos;    // usado para implementar iterador
} Lista;

// Cria uma lista estática vazia
// Entrada: nenhuma
// Retorno: ponteiro para a lista criada
// Pré-condição: nenhuma
// Pós-condição: lista inicializada e vazia
Lista* cria_lista_vazia(void);

#endif /* listaEstatica_h */