#include <stdio.h>
#include <math.h>

int main(){
    int n, menor, posicao;
    scanf("%d",&n);
    int x[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &x[i]);
        if (i == 0){
            menor = x[i];
            posicao = i;
        }
        else if (menor > x[i]){
            menor = x[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",posicao);

    return 0;
}