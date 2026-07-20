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

// Retorna o próximo item da lista
// Entrada: lista
// Retorno: próximo elemento da lista ou -1 casa não existam mais elementos
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: iterador avançado para o próximo elemento
TipoItem proximo(Lista* l) {
    l->pos++;
    if(l->pos >= l->ultimo)
        return -1;  // acabou itens
    else 
        return l->item[l->pos];
}

// Retorna o primeiro item da lista
// Entrada: lista
// Retorno: primeiro elemento da lista ou -1 caso esteja vazia
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: iterador posiciona no primeiro elemento da lista
TipoItem primeiro(Lista* l) {
    l->pos = -1;
    return proximo(l);
}

// Imprime usando as funções iteradoras para percorrer a lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: ponteiro não nulo para lista
// Pós-condição: os itens da lista são exibidos na tela
void imprimir(Lista* l) {
    if(vazia(l))
        printf("Lista vazia.\n");
    else {
        TipoItem x = primeiro(l);
        printf("[ ");
        do {
            printf("%d ", x);
        } while((x = proximo(l)) != -1);
        printf("]\n");
    }
}

// Busca um elemento na lista
// Entrada: lista e elemento a ser procurado
// Retorno: posição do elemento caso encontrado ou -1 caso contrário
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: nenhuma
int buscar(Lista* l, TipoItem x) {
    int i;

     if(l == NULL)
        return -1;

    for(i = l->primeiro; i < l->ultimo; i++) {
        if(l->item[i] == x)
            return i;
    }
    return -1;
}

// Remove um elemento da lista
// Entrada: lista e elemento a ser removido
// Retorno: verdadeiro se a remoção foi realizada, falso caso contrário
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: elemento removido da lista, caso exista
int remover(Lista* l, TipoItem x) {
    int i;
    int pos;

    if(l == NULL)
        return 0;

    if(vazia(l))
        return 0;

    pos = buscar(l, x);

    if(pos == -1)
        return 0;

    for(i = pos; i < l->ultimo - 1; i++) 
        l->item[i] = l->item[i + 1];

    l->ultimo--;

    return 1;
}

// Retorna a quantidade de elementos da lista
// Entrada: lista
// Retorno: número de elementos armazenados na lista
// Pré-condição: nenhuma
// Pós-condição: nenhuma
int tamanho(Lista* l) {
    if(l == NULL)
        return 0;
    return l->ultimo - l->primeiro;
}

// Retorna o elemento armazenado em uma posição da lista
// Entrada: lista e posição do elemento
// Retorno: elemento armazenado ou -1 caso a posição seja inválida
// Pré-condição: nenhuma
// Pós-condição: nenhuma
TipoItem obter(Lista* l, int posicao) {
    if(l == NULL)
        return -1;

    if(posicao < l->primeiro || posicao >= l->ultimo)
        return -1;

    return l->item[posicao];
}