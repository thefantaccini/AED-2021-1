#include <stdio.h>
#include <math.h>

int main(){
    int n;
    do{
        scanf("%d",&n);
        if (n == 0) break;
        float v[n], u[n], r[n];
        for(int i=0; i<n; i++) scanf("%f",&v[i]);
        for(int i=0; i<n; i++) scanf("%f",&u[i]);
        for(int i=0; i<n; i++) r[i] = v[i] - u[i];
        for(int i=0; i<n; i++){
             if(i == n-1)printf("%.2f\n", r[i]);
             else printf("%.2f ", r[i]);
        }
    }while(n!=0);

    return 0;
}