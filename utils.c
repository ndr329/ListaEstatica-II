#include "utils.h"

#include <stdlib.h>

#include "listaEstatica.h"

// Exibe o menu de opções do programa
// Entrada: nenhuma
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: nenhuma
void menu(void) {
    Lista* l = cria_lista_vazia();

    int opcao = 1;
    int tam;
    int pos;
    int x;
    TipoItem item;

    while(opcao != 0) {
        printf("\nEscolha uma das opções: \n\n");
        printf("1. Inserir um elemento na lista.\n");
        printf("2. Exibir lista.\n");
        printf("3. Verificar o tamanho da lista.\n");
        printf("4. Exibir elemento de uma posição da lista.\n");
        printf("5. Inserir elemento na primeira posição da lista.\n");
        printf("6. Inserir elemento em determinada posição da lista.\n");
        printf("7. Excluir um elemento da lista.\n");
        printf("8. Excluir elemento em determinada posição da lista.\n");
        printf("0. Encerrar programa.\n");
        printf("\nOpção: ");

        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Informe o valor do elemento: ");
                scanf("%d", &item);
                inserir(l, item);
                break;
            case 2:
                printf("Elementos da lista: ");
                imprimir(l);
                break;
            case 3:
                tam = tamanho(l);
                printf("O número de elemento da lista é: %d\n", tam);
                break;
            case 4:
                printf("Informe a posição do item: ");
                scanf("%d", &pos);
                printf("O elemento na posição %d é: %d\n", pos, obter(l, pos));
                break;
            case 5:
                printf("Informe o valor do elemento: ");
                scanf("%d", &item);
                inserir_inicio(l, item);
                break;
            case 6: 
                printf("Informe o valor do elemento a ser inserido: ");
                scanf("%d", &item);
                printf("Informe a posição: ");
                scanf("%d", &pos);
                inserir_pos(l, pos, item);
                break;
            case 7:
                printf("Informe o elemento a ser removido: ");
                scanf("%d", &x);
                remover(l, x);
                break;
            case 8:
                printf("Informe a posição do item: ");
                scanf("%d", &pos);
                remover_pos(l, pos);
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    }

    liberar(l);
}