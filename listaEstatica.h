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

// Retorna o próximo item da lista
// Entrada: lista
// Retorno: próximo elemento da lista ou -1 casa não existam mais elementos
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: iterador avançado para o próximo elemento
TipoItem proximo(Lista* l);

// Retorna o primeiro item da lista
// Entrada: lista
// Retorno: primeiro elemento da lista ou -1 caso esteja vazia
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: iterador posiciona no primeiro elemento da lista
TipoItem primeiro(Lista* l);

// Imprime usando as funções iteradoras para percorrer a lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: ponteiro não nulo para lista
// Pós-condição: os itens da lista são exibidos na tela
void imprimir(Lista* l);

// Busca um elemento na lista
// Entrada: lista e elemento a ser procurado
// Retorno: posição do elemento caso encontrado ou -1 caso contrário
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: nenhuma
int buscar(Lista* l, TipoItem x);

// Remove um elemento da lista
// Entrada: lista e elemento a ser removido
// Retorno: verdadeiro se a remoção foi realizada, falso caso contrário
// Pré-condição: ponteiro não nulo para estrutura lista
// Pós-condição: elemento removido da lista, caso exista
int remover(Lista* l, TipoItem x);

#endif /* listaEstatica_h */