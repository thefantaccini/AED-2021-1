#include <stdio.h>
#include <stdlib.h>

int acheiBin(int* v, int valor, int begin, int end){ /*inicialmente é o tamanho do vetor*/
    int meio = (begin + end) / 2; // Busca pelo meio do vetor
    if (begin > end){ //Ponto de parada
        printf("NAO ACHEI\n");
        return -1;
    }
    if (v[meio] == valor) { //Achando item no meio
        printf("ACHEI\n");
        return -1;
    }
    if (v[meio] < valor) return acheiBin(v, valor, meio + 1, end); //Valor é maior
    return acheiBin(v, valor, begin, meio -1); //Valor é menor
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
        acheiBin(v, valor, 0, n);
    }

    return 0;
}