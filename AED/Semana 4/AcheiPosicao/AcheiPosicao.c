#include <stdio.h>
#include <stdlib.h>

int acheiPosicao(int* v, int n, int valor){
    for(int i=0; i<n; i++)
        if(v[i] == valor){
            return i;
        }
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
        printf("%d\n",acheiPosicao(v, n, valor));
    }

    return 0;
}