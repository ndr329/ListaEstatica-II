# Lista Estática em linguagem C

## Descrição

Implementação de uma lista estática em linguagem C, que utiliza um vetor de 
tamanho fixo. Permitindo armazenar até mil elementos do tipo int. O projeto dispõe
da pricipais operações envolvendo lista: inserção, remoção, impressão, busca, consulta e iteração.
O projeto também possui um menu interativo para que o usuário possa testar todas as funcionalidades.

---

## Estrutura da lista

A lista é representada pela seguite estrutura:

```c
#define TAM_MAX 1000

typedef int TipoItem;

typedef struct {
    TipoItem item[TAM_MAX];
    int primeiro;
    int ultimo;
    int pos;
} Lista;
```

### Campo da Estrutura

|   Campo    | Descrição |
|------------|-----------|
|  `item[]`  | vetor utilizado para armazenar os elementos da lista. |
|  `primeiro`| índice do primeiro elemento da lista. |
|  `ultimo`  | índice da próxima posição livre do vertor. |
|  `pos`.    | utilizado pelas funções iteradoras para percorrer o vetor. |

---

## Funcionalidades implementadas

A biblioteca disponibiliza as seguintes operações:

- criar lista vazia;
- verificar se a lista está vazia;
- inserir elemento no final da lista;
- inserir elemento no início da lista;
- inserir elemento numa posição específica da lista;
- buscar um elemento pelo seu valor;
- remover um elemento pelo seu valor;
- remover um elemento por posição;
- obter o elemento armazenado em determinada posição;
- retornar o tamanho da lista;
- percorrer a lista utilizando iteradores;
- imprimir os elementos da lista;
- liberar a memória utilizada pela lista.

---

## Menu do Programa

Ao executar o programa, o usuário pode escolher umas das seguintes opções:


|   Opção    | Descrição |
|------------|-----------|
|     1      | inserir o elemento no final da lista. |
|     2      | exibir todos os elementos da lista. |
|     3      | exibir a quantidade de elementos da lista. |
|     4      | obter o elemento armazenado em uma posição. |
|     5      | inserir elemento no início da lista. |
|     6      | inserir elemento em uma posição específica. |
|     7      | remover um elemento por seu valor. |
|     8      | remover um elemento de uma posição específica. |
|     0      | encerrar programa. |

---

## Organização do Projeto

```
.
|-- main.c
|-- listaEstatica.c
|-- listaEstatica.h
|-- utils.c
|-- utils.h
|-- README.txt

```

---

## Compilação

Utilizando o GCC:

```bash
gcc *.c -o listaEstatica
```

---

## Execução

Linux/macOS:

```bash
./listaEstatica
```

Windows:

```cmd
listaEstatica.exe
```

---

## Autor

André Brandão