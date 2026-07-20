#include "listaEstatica.h"

#include <stdlib.h>

// Cria uma lista estática vazia
// Entrada: nenhuma
// Retorno: ponteiro para a lista criada
// Pré-condição: nenhuma
// Pós-condição: lista inicializada e vazia
Lista* cria_lista_vazia(void) {
    Lista* nova_lista = (Lista*) malloc(sizeof(Lista));
    nova_lista->primeiro = 0;
    nova_lista->ultimo = 0;
    nova_lista->pos = -1;
    return nova_lista;
}

// Verifica se a lista está vazia
// Entrada: lista
// Retorno: verdadeiro se a lista estiver vazia, falso caso contrário
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: nenhuma
int vazia(Lista* l) {
    return (l->primeiro == l->ultimo);
}

// Insere um elemento no final da lista
// Entrada: lista e elemento a se inserido
// Retorno: verdadeiro se a inserção foi realizada, falso caso contrário
// Pré-condição: ponteiro não nula para estrutura lista e lista não cheia
// Pós-condição: elemento inserido no final da lista
int inserir(Lista* l, TipoItem item) {
    if(l == NULL)
        return 0;

    if(l->ultimo == TAM_MAX)
        return 0;

    l->item[l->ultimo] = item;
    l->ultimo++;
    return 1;
}

// Libera a memória ocupada pela lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: ponteiro para uma lista criada dinâmicamente
// Pós-condição: memória da lista liberada
void liberar(Lista* l) {
    if(l != NULL)
        free(l);
}