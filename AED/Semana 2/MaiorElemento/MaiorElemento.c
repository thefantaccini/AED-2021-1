#include <stdio.h>
#include <math.h>

int main(){
    int n, maior, posicao;
    do{
        scanf("%d",&n);
        if (n == 0) break;
        int x[n];
        for(int i = 0; i<n; i++){
            scanf("%d", &x[i]);
            if (i == 0){
                maior = x[i];
                posicao = i;
            }
            else if (maior < x[i]){
                maior = x[i];
                posicao = i;
            }
        }
        printf("%d %d\n", posicao, maior);
    }while(n!=0);



    return 0;
}