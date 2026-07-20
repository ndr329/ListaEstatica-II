#include "listaEstica.h"

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