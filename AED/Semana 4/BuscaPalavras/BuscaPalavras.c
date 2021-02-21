#include <stdio.h>
#include <stdlib.h>

int tamanhoChar(char* p){
    int cont = 0;
    for(;*p;p++) cont++;
    return cont;
}

int BuscaPalavras(char** v, int n, char* valor){ /*inicialmente é o tamanho do vetor*/
    int r = 0;
    int tValor = tamanhoChar(valor);
    for(int i = 0; i<n; i++) // Procura entre todas as palavras
        if(tamanhoChar(*(v+i)) == tValor) // Verifica se as palavras tem o mesmo tamanho
            for(int j=0; j<tValor; j++){ // Verifica letra por letra, quebra o laço se houver diferença no meio
                if(v[i][j] != valor[j]) break;
                else if( j == (tValor-1) ) r++;
            }
    return r;
}

int main(){
    int n = 0, casosTeste = 0;
    char valor[25];

    scanf("%d", &n); // Quantidade de Palavras

    //Alocação da Matriz de Palavras de 25 caracteres
    char** v = (char**) malloc(n * sizeof(char*));
        for(int i = 0; i<n; i++) *(v+i) = (char*) malloc(25 * sizeof(char));

    // Lê palavras
    for(int i=0; i<n; i++) scanf("%s",*(v+i));

    //Qtd de casos de teste e comparações
    scanf("%d", &casosTeste);

    //Lê palavra e diz quantas vezes ela está no vetor
    for(int i=0; i<casosTeste; i++){
        scanf("%s",valor);
        printf("%d\n",BuscaPalavras(v, n, valor));
    }
    free(v);
    return 0;
}