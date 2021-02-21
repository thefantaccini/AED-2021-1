#include <stdio.h>

int main(){
    long int a,b,c;
    scanf("%ld %ld", &a, &b);
    a+=b;
    b*=-1;
    b+=a;
    a-=b;
    printf("%ld %ld\n", a, b);

    return 0;
}