#include <stdio.h>
#include <math.h>

int main(){

    int n = 0; // quantidade de figurinhas (espaços) do álbum
    int m = 0; // a quantidade de figurinhas já compradas
    scanf("%d %d", &n, &m);
    int compradas[m]; // figurinhas já compradas.
    for(int i = 0; i<m; i++) scanf("%d",&compradas[i]);
    //procura as carimbadas dentro do total
    for(int i = 0; i<m; i++)
        for(int j = 0; j<i; j++){
            if(compradas[j] == compradas[i] && i != j){
                n++;
                break;
            }
        }
    printf("%d\n",n-m);
    return 0;
}