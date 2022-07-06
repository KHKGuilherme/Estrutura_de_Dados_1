
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//---------------------------------------------------------------------------------
// Estrutura
//---------------------------------------------------------------------------------

//Ponteiro para No de Lista
typedef struct NoLista *PtrNoLista;

//Estrutura de um nó
typedef struct NoLista {
  int x;
  PtrNoLista proximo;
} NoLista;

//Estrutura da Lista
typedef struct {
  PtrNoLista inicio;
  int tamanho;
} Lista;

//---------------------------------------------------------------------------------
// Funções
//---------------------------------------------------------------------------------

// Inicialização da lista
bool iniciaLista(Lista* lista);

// Verificar se a lista está vazia
bool verificaVazia(Lista* lista);

// Insere um elemento
void inserirLista(Lista* lista, int new);

// Remova um elemento especifico
bool removeListaEspecifico(Lista* lista, int remove);

// Remova o primeiro elemento
bool removeListaPrimeiro(Lista* lista);

// Remova o ultimo elemento
bool removeListaUltimo(Lista* lista);

// Checa o final da lista
int finalLista(Lista* lista);

// Checa o inicio da lista
int inicioLista(Lista* lista);

// Verifica tamanho da lista
int tamanhoLista(Lista* lista);

// Zerar a Lista
void destroiLista(Lista* lista);

// Imprime lista
void imprimeLista(Lista* lista);