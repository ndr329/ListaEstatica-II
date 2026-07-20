#include <stdio.h>
#include <stdlib.h>

#include "listaEstatica.h"

int main(int argc, const char* argv[]) {
    Lista* l = cria_lista_vazia();

    inserir(l, 10);
    inserir(l, 20);
    inserir(l, 30);
    inserir(l, 40);

    imprimir(l);

    liberar(l);

    printf("\n");
    return 0;
}