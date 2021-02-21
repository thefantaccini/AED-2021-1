#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    int valor[n];
    int mult[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &valor[i]);
        mult[i] = valor[i] * 3;
    }
    for(int i = 0; i<n; i++){
        if(i == n-1) printf("%d\n",mult[i]);
        else printf("%d ",mult[i]);
    }
    return 0;
}