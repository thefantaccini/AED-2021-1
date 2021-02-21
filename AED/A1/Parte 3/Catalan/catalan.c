#include <stdio.h>
int catalan(int n){
    if(n < 2) return 1;
    return( ((4*n - 2)*catalan(n-1))/(n+1) );
    int r = 0;
}
int main(){
    int n = 0;
    scanf("%d",&n);
    while(n>-1){
        printf("%d\n", catalan(n));
        scanf("%d",&n);
    }
    return 0;
}