#include <stdio.h>
#include <math.h>

int main(){
    int n = 0, k = 0, k1 = 0, i = 0, energia = 100;
    scanf("%d %d",&n, &k);
    int x[n];
    for(int j = 0; j<n; j++) scanf("%d",&x[j]);
    k1 = k; /*K1 é o maior salto potencial, se possível ele
    diminui o salto pra pular numa nuvem 0*/
    while(i<n){
        //printf("\nvou pular da nuvem %d\n",i);
        i+=k1;
        //printf("\ncheguei na nuvem %d\n",i);
        energia--;
        if(x[i] == 1) energia = energia - 2;
        k1 = k;
        if(i+k > n-1){ //Se k for maior que a distância n precisa pular tanto
            k1 = n-1;
        }else{
            for(int f = i+k; f>i; f--){ //Acha o nuvem 0 mais longe do alcance
                if(x[f] == 0) k1 = f-i;
                break;
            }
        }
    }


    printf("%d\n",energia);
    return 0;
}