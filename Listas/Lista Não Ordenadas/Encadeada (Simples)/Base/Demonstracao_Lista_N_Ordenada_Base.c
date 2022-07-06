
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Lista_N_Ordenada_Base.h"

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