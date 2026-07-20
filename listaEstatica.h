#ifndef listaEstatica_h
#define listaEstatica_h

#include <stdio.h>

#define TAM_MAX 1000    // número máximo de itens na lista

typedef int TipoItem;   // representa o tipo de elementos da lista

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

// Verifica se a lista está vazia
// Entrada: lista
// Retorno: verdadeiro se a lista estiver vazia, falso caso contrário
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: nenhuma
int vazia(Lista* l);

// Insere um elemento no final da lista
// Entrada: lista e elemento a se inserido
// Retorno: verdadeiro se a inserção foi realizada, falso caso contrário
// Pré-condição: ponteiro não nula para estrutura lista e lista não cheia
// Pós-condição: elemento inserido no final da lista
int inserir(Lista* l, TipoItem item);

// Libera a memória ocupada pela lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: ponteiro para uma lista criada dinâmicamente
// Pós-condição: memória da lista liberada
void liberar(Lista* l);

#endif /* listaEstatica_h */