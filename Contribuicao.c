#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contribuicao.h"
#include "Editor.h"


struct contribuicao {
    Editor* editor;
    char* textoContribuicao;
    char* nomeContribuicao;
};

Contribuicao* InicContribuicao (char* texto, char* nome, Editor* editor) {
    Contribuicao* contribuicao = (Contribuicao*) malloc (sizeof (Contribuicao));

    contribuicao->nomeContribuicao = strdup(nome);
    contribuicao->textoContribuicao = strdup(texto);
    contribuicao->editor = editor;

    return contribuicao;
}

char* RetornaTextoContribuicao (Contribuicao* contribuicao){
    return contribuicao->textoContribuicao;
}

char* RetornaNomeContribuicao (Contribuicao* contribuicao){
    return contribuicao->nomeContribuicao;
}

Editor* RetornaEditorContribuicao (Contribuicao* contribuicao){
    return contribuicao->editor;
}

void ImprimeContribuicao (Contribuicao* contribuicao){
    printf("%s ", contribuicao->nomeContribuicao);
    printf("%s\n", RetornaNomeEditor(contribuicao->editor));
    printf("%s\n\n", contribuicao->textoContribuicao);
}

void DestroiContribuicao (Contribuicao* contribuicao){
    free (contribuicao->nomeContribuicao);
    free (contribuicao->textoContribuicao);
    free (contribuicao);
}