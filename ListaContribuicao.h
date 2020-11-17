#ifndef ListaContribuicao_h
#define ListaContribuicao_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contribuicao.h"

typedef struct listaContribuicao ListaContribuicao;

ListaContribuicao* InicListaContribuicao();

void InsereContribuicao (ListaContribuicao* lista, Contribuicao* contrib);

void ImprimeListaContribuicao (ListaContribuicao* lista);

Contribuicao* RetiraContribuicao (ListaContribuicao* lista, char* chave);

void DestroiListaContribuicao (ListaContribuicao* lista);

#endif /* ListaContribuicao_h */