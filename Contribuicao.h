#ifndef Contribuicao_h
#define Contribuicao_h

#include <stdio.h>
#include "Contribuicao.h"
#include "ListaEditor.h"

typedef struct contribuicao Contribuicao;

Contribuicao* InicContribuicao (char* texto, char* nome, Editor* editor);

char* RetornaTextoContribuicao (Contribuicao* contribuicao);

char* RetornaNomeContribuicao (Contribuicao* contribuicao);

Editor* RetornaEditorContribuicao (Contribuicao* contribuicao);

void ImprimeContribuicao (Contribuicao* contribuicao);

void DestroiContribuicao (Contribuicao* contribuicao);

#endif /* Contribuicao_h */