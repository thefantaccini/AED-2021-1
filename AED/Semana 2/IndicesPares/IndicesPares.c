#include <stdio.h>
#include <math.h>

int main(){
    int n = 0, pares = 0;
    scanf("%d",&n);
    int x[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&x[i]);
        if(x[i]%2 == 0) pares++;
    }
    for(int i = 0; i<n; i+=2) printf("%d ", x[i]);
    printf("%d\n",pares)
    return 0;
}