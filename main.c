#include <stdio.h>
#include "ListaEditor.h"
#include "ListaContribuicao.h"

int main(){
    //Incialização de editores
    Editor* deletaEditor;
    Editor* ed1 = InicEditor("Ana");
    Editor* ed2 = InicEditor("Be");
    Editor* ed3 = InicEditor("Ca");
    Editor* ed4 = InicEditor("De");

    Contribuicao* deletaContrib;
    Contribuicao* c1 = InicContribuicao("este aqui eh o texto", "titulo", ed1);
    Contribuicao* c2 = InicContribuicao("este aqui eh o texto2", "titulo2", ed2);
    Contribuicao* c3 = InicContribuicao("este aqui eh o texto3", "titulo3", ed3);
    Contribuicao* c4 = InicContribuicao("este aqui eh o texto4", "titulo4", ed4);

    ListaEditor* le1 = InicListaEditor();
    InsereEditorListaEditor(le1,ed1);
    InsereEditorListaEditor(le1,ed2);
    InsereEditorListaEditor(le1,ed3);
    InsereEditorListaEditor(le1,ed4);

    ListaContribuicao* lc1 = InicListaContribuicao();
    InsereContribuicao(lc1, c1);

    InsereContribuicao(lc1, c2);

    InsereContribuicao(lc1, c3);
    
    InsereContribuicao(lc1, c4);

    printf("Esta eh a sua primeira lista\n");
    printf("\n");
    ImprimeListaContribuicao(lc1);
    


    deletaContrib = RetiraContribuicao(lc1, "titulo2");
    DestroiContribuicao(deletaContrib);
    printf("Lista sem titulo 2\n\n");
    ImprimeListaContribuicao(lc1);

    deletaContrib = RetiraContribuicao(lc1, "titulo");
    DestroiContribuicao(deletaContrib);
    printf("Lista sem titulo 1\n\n");
    ImprimeListaContribuicao(lc1);

    deletaContrib = RetiraContribuicao(lc1, "titulo4");
    DestroiContribuicao(deletaContrib);
    printf("Lista sem titulo 4\n\n");
    ImprimeListaContribuicao(lc1);

    DestroiListaContribuicao(lc1);
    DestroiListaEditor(le1);

    return 0;
}



// int main(int argc, char** argv) {
//     //mensagem de erro
//     if (argc <= 1) {
//          printf("ERRO: O diretorio de arquivos de configuracao nao foi informado");
//          return 0;
//      }
    

//     //gerar arquivos
//     // sprintf(Inicializacao, "%s/saida/Inicializacao.txt", argv[1]);
//     // sprintf(Config, "%s/config.txt", argv[1]);
//     // sprintf(Estatistica, "%s/saida/Estatisticas.txt", argv[1]);
//     // sprintf(MapaOrdenado, "%s/saida/MapaOrdenado.txt", argv[1]);

//     FILE*arquivo;
//     arquivo = fopen(Config, "r");
//     if (arquivo == NULL) {
//         printf("O arquivo nao foi lido. %s", Config);
//         exit(1);
//     }
//     //ver se arquivo terminou-completo;
//     while (!feof(arquivo)) {

//         //turnos para cada jogador
//         fscanf(arquivo, "%d", &jogo.turnos);

//         //Tamanho da matriz e ler a matriz
//         jogo.Matriz = LerMatriz(arquivo);

//         //se erro em ler matriz (mensagem de erro)

//         //numero de palavras para cada jogador
//         fscanf(arquivo, "%d", &jogo.Jogador1.n);
//         }
//         //fechar arquivo
//         fclose(arquivo);

//     //Incialização de editores
//     Editor* deletaEditor;
//     Editor* ed1 = InicEditor("Ana");
//     Editor* ed2 = InicEditor("Be");
//     Editor* ed3 = InicEditor("Ca");
//     Editor* ed4 = InicEditor("De");



//     ListaEditor* l1 = InicListaEditor();
//     InsereEditorListaEditor(l1,ed1);
//     ImprimeListaEditor(l1);
//     InsereEditorListaEditor(l1,ed2);
//     ImprimeListaEditor(l1);
//     InsereEditorListaEditor(l1,ed3);
//     InsereEditorListaEditor(l1,ed4);
//     ImprimeListaEditor(l1);
    
//     printf("Esta eh a sua primeira lista\n");
//     printf("\n");
//     ImprimeListaEditor(l1);

//     //3 posição da l1 foi excluida
//     deletaEditor = RetiraEditorListaEditor(l1, "Ca");
//     DestroiEditor(deletaEditor);
//     printf("Lista sem Ca\n\n");
//     ImprimeListaEditor(l1);

//     //1 posição da l1 foi excluida
//     deletaEditor = RetiraEditorListaEditor(l1, "Ana");
//     DestroiEditor(deletaEditor);
//     printf("Lista sem a Ana\n\n");
//     ImprimeListaEditor(l1);

//     deletaEditor = RetiraEditorListaEditor(l1, "De");
//     DestroiEditor(deletaEditor);
//     printf("Lista sem De\n\n");
//     ImprimeListaEditor(l1);


//         //nova matriz na l1
//         Editor* ed5 = InicEditor("Ele");
//         InsereEditorListaEditor(l1, ed5);
//         printf("l1 com novo ele\n");
//         ImprimeListaEditor(l1);

//         DestroiListaEditor(l1);
    

//     return 0;
// }
