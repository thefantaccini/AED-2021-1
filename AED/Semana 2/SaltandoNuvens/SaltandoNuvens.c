#include <stdio.h>
#include <math.h>

int main(){
    int n = 0, pulos = 0;
    scanf("%d",&n);
    int x[n];
    for(int i = 0; i<n; i++) scanf("%d",&x[i]);
    for(int i = 0; i<n-1; i++){
        if(i == n-2){
            pulos++;
        }else if(x[i+2] == 0){
            pulos++;
            i++;
        }else{
            pulos++;
        }
    }

    printf("%d\n",pulos);
    return 0;
}