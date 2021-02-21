#include <stdio.h>
#include <stdlib.h>

int acheiBinPosicao(int* v, int valor, int begin, int end){ /*inicialmente é o tamanho do vetor*/
    int meio = (begin + end) / 2; // Busca pelo meio do vetor
    if (begin > end) return -1; //Ponto de parada
    if (v[meio] == valor) return meio; //Achando item no meio
    if (v[meio] < valor) return acheiBinPosicao(v, valor, meio + 1, end); //Valor é maior
    return acheiBinPosicao(v, valor, begin, meio -1); //Valor é menor
    return -1;
}

int main(){
    int n = 0, casosTeste = 0, valor = 0;
    int* v;
    // Alocação e leitura do Vetor
    scanf("%d", &n);
    v = (int*) malloc(n* sizeof(int));
    for(int i=0; i<n; i++) scanf("%d", v+i);
    //Qtd de casos de teste e comparações
    scanf("%d", &casosTeste);
    for(int i=0; i<casosTeste; i++){
        scanf("%d",&valor);
        printf("%d\n",acheiBinPosicao(v, valor, 0, n));
    }

    return 0;
}