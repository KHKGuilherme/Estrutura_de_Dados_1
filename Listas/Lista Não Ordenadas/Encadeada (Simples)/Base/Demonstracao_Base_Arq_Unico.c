
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


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

// Inicialização da lista
bool iniciaLista(Lista* lista){
    lista->inicio = NULL;
    lista->tamanho = 0;
}

// Verificar se a lista está vazia
bool verificaVazia(Lista* lista){
    return lista->tamanho==0;
}

// Insere um elemento
void inserirLista(Lista* lista, int new){
    
    PtrNoLista new_no = (PtrNoLista)malloc(sizeof(NoLista));    
    new_no->x=new;
    new_no->proximo=NULL;

    if(verificaVazia(lista)){
        lista->inicio = new_no;
    }else{
        PtrNoLista aux;
        for (aux = lista->inicio; aux->proximo != NULL; aux = aux->proximo){
        }
        aux->proximo = new_no;
    }
    lista->tamanho++;    
}

// Remova um elemento especifico
bool removeListaEspecifico(Lista* lista, int remove){
    
    if(verificaVazia(lista)){
        printf('A lista está vazia!\n');
        return false;
    }else{
        PtrNoLista aux;
        for (aux = lista->inicio; aux->proximo != NULL && aux->proximo->x != remove; aux = aux->proximo){
        }
        if(aux->proximo->x == remove){
            PtrNoLista remover = aux->proximo;
            aux->proximo = remover->proximo;
            free(remover);
            lista->tamanho--;
            return true;
        }else{
            printf("Número não está inserido na lista.\n");
            return false;
        }
    }
}

// Remova o primeiro elemento
bool removeListaPrimeiro(Lista* lista){
    if(verificaVazia(lista)){
        printf('A lista está vazia!\n');
        return false;
    }else{
        PtrNoLista remover = lista->inicio;
        lista->inicio = lista->inicio->proximo;
        free(remover);
        lista->tamanho--;
        return true;
    }
}

// Remova o ultimo elemento
bool removeListaUltimo(Lista* lista){
    if(verificaVazia(lista)){
        printf('A lista está vazia!\n');
        return false;
    }else if(tamanhoLista(lista) == 1){
        removeListaPrimeiro(lista);
    }else{
        PtrNoLista aux;
        for (aux = lista->inicio; aux->proximo->proximo != NULL; aux = aux->proximo){
        }
        PtrNoLista remover = aux->proximo;
        aux->proximo = remover->proximo;
        free(remover);
        lista->tamanho--;
        return true;
    }
}

// Checa o final da lista
int finalLista(Lista* lista){
    if(verificaVazia(lista)){
        printf('A lista está vazia!\n');
        return -999;
    }else{
        PtrNoLista aux;
        for (aux = lista->inicio; aux->proximo != NULL; aux = aux->proximo){
        }
        return aux->x;
    }
}

// Checa o inicio da lista
int inicioLista(Lista* lista){
    if(verificaVazia(lista)){
        printf('A lista está vazia!\n');
        return -999;
    }else{
        return lista->inicio->x;
    }
}

// Verifica tamanho da lista
int tamanhoLista(Lista* lista){
    return lista->tamanho;
}

// Zerar a Lista
void destroiLista(Lista* lista){
    while(!verificaVazia(lista)){
        removeListaUltimo(lista);    
    }
}

// Imprime lista
void imprimeLista(Lista* lista){
    if(verificaVazia(lista)){
        printf("Lista = []\n");
    }else{
        printf("Lista: [");
        PtrNoLista aux;
        for (aux = lista->inicio; aux != NULL; aux = aux->proximo){
            if(aux->proximo == NULL){
                printf("%d",aux->x);
            }else{
                printf("%d,",aux->x);
            }
        }
        printf("]\n");
    }
}


int main(){
    
    printf("Iniciando Demonstração!\n");
    Lista lista;
    iniciaLista(&lista);
    imprimeLista(&lista);
    inserirLista(&lista,33);
    inserirLista(&lista,10);
    inserirLista(&lista,7);
    inserirLista(&lista,15);
    inserirLista(&lista,14);
    inserirLista(&lista,3);
    inserirLista(&lista,4);
    imprimeLista(&lista);

    printf("Demonstrando Exibir:\n");
    
    if (verificaVazia(&lista)){
        printf("Está Vazia\n");
    }

    printf("Inicio: %d\n",inicioLista(&lista));
    printf("Final: %d\n",finalLista(&lista));
    printf("Tamanho: %d\n",tamanhoLista(&lista));

    printf("\n\nDemonstrando Remoção:");
    printf("Remove o inicio...\n");
    removeListaPrimeiro(&lista);
    imprimeLista(&lista);
    printf("Remove o final...\n");
    removeListaUltimo(&lista);
    imprimeLista(&lista);
    printf("Remove o 15...\n");
    removeListaEspecifico(&lista,15);
    imprimeLista(&lista);
    printf("Tamanho: %d\n",tamanhoLista(&lista));

    printf("\nDemonstração Zerar Lista:");
    printf("Esvazie a Lista...");
    destroiLista(&lista);
    if (verificaVazia(&lista)){
        printf("Está Vazia\n");
    }
    imprimeLista(&lista);

    printf("\nFinalizando...");
    return 0;
}