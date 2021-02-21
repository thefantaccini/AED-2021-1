#include <stdio.h>
#include <math.h>

int main(){

    int n = 0; // quantidade de figurinhas (espaços) do álbum
    int c = 0; // quantidade de figurinhas carimbadas do álbum
    int m = 0; // a quantidade de figurinhas já compradas
    scanf("%d %d %d", &n, &c, &m);
    int restantes = c;
    int x[c]; // figurinhas carimbadas do álbum
    int y[m]; // figurinhas já compradas.
    for(int i = 0; i<c; i++) scanf("%d",&x[i]);
    for(int i = 0; i<m; i++) scanf("%d",&y[i]);
    //procura as carimbadas dentro do total
    for(int i = 0; i<c; i++)
        for(int j = 0; j<m; j++){
            if(x[i] == y[j]){
                restantes--;
                break;
            }
        }
    printf("%d\n",restantes);
    return 0;
}