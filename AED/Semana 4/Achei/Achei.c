#include <stdio.h>
#include <stdlib.h>

int achei(int* v, int n, int valor){
    for(int i=0; i<n; i++)
        if(v[i] == valor){
            printf("ACHEI\n");
            return 0;
        }
    printf("NAO ACHEI\n");
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
        achei(v, n, valor);
    }

    return 0;
}