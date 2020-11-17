#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaContribuicao.h"

typedef struct celContribuicao CelulaContribuicao;

struct celContribuicao{
    Contribuicao* contribuicao;
    CelulaContribuicao* prox;
};


struct listaContribuicao {
    CelulaContribuicao* Prim;
    CelulaContribuicao* Ult;
};

ListaContribuicao* InicListaContribuicao(void) {
    ListaContribuicao* lista = (ListaContribuicao*) malloc (sizeof (ListaContribuicao));
    lista->Prim = NULL;
    lista->Ult = NULL;

    return lista;
}

void InsereContribuicao (ListaContribuicao* lista, Contribuicao* contrib) {
    CelulaContribuicao* nova = (CelulaContribuicao*) malloc (sizeof (CelulaContribuicao));

    nova->contribuicao = contrib;
    nova->prox = NULL;

    if (lista->Ult == NULL && lista->Prim == NULL){
        lista->Ult = nova;
        lista->Prim = nova;
    }
    else{
        lista->Ult->prox = nova;
        lista->Ult = nova;
    }
    
}

void ImprimeListaContribuicao (ListaContribuicao* lista) {
    CelulaContribuicao* p; //ponteiro auxiliar

    for(p = lista->Prim; p!= NULL; p = p->prox){
        ImprimeContribuicao(p->contribuicao);
    }
}

Contribuicao* RetiraContribuicao (ListaContribuicao* lista, char* chave){
    CelulaContribuicao* p = lista->Prim;
    Contribuicao* contrib;
    CelulaContribuicao* ant = NULL;

    //faz a busca
    while (p!=NULL && strcmp(RetornaNomeContribuicao(p->contribuicao), chave)){
        ant = p;
        p = p->prox;
    }

    //lista vazia ou nao encontrou matriz
    if(p==NULL){
        return NULL;
    }

    //atribui a matriz de retorno
    contrib = p->contribuicao; 

    //se for unico
    if(p == lista->Prim && p == lista->Ult){
        lista->Prim = lista->Ult = NULL;
    }
    else if(p == lista->Prim){ //se for o primeiro
        lista->Prim = p->prox;
    }
    else if(p == lista->Ult){ //se for o ultimo
        lista->Ult = ant;
        lista->Ult->prox = NULL;
    }
    else{ //caso comum
        ant->prox = p->prox;
    }

    free(p);

    return contrib; 
}


void DestroiListaContribuicao(ListaContribuicao* lista){
    CelulaContribuicao* p = lista->Prim;
    CelulaContribuicao* t;

    while (p != NULL)
    {
        t = p->prox;
        DestroiContribuicao(p->contribuicao);
        free(p);
        p=t;
    }

    free(lista);
    
}