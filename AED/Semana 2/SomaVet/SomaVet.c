#include <stdio.h>
#include <math.h>

int main(){
    int n;
    long int soma = 0;
    scanf("%d",&n);
    long int valores[n];
    for(int i = 0; i<n; i++){
        scanf("%ld", &valores[i]);
        soma+=valores[i];
    }
    printf("%ld\n", soma);
    return 0;
}