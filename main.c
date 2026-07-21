#include <stdio.h>
#include <stdlib.h>

#include "listaEstatica.h"

int main(int argc, const char* argv[]) {
    Lista* l = cria_lista_vazia();

    inserir(l, 10);
    inserir(l, 20);
    inserir(l, 30);
    inserir(l, 40);

    printf("Lista após as inserções:\n");
    imprimir(l);

    remover(l, 20);

    printf("\nLista após a remoção:\n");
    imprimir(l);

    inserir(l, 43);
    inserir(l, 55);

    int tam = tamanho(l);
    printf("\nO tamanho da lista é: %d\n", tam);

    TipoItem x = obter(l, 3);
    printf("\nO item localizado na posição 4 é: %d\n\n", x);

    imprimir(l);

    inserir_pos(l, 3, 47);
    
    imprimir(l);

    liberar(l);

    printf("\n");
    return 0;
}
