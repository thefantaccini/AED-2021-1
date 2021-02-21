#include <stdio.h>
#include <stdlib.h>

unsigned int adicao(unsigned int a,unsigned int b){
    if(b == 0) return a;
    if(a == 0) return b;
    if(a>b) return adicao(a+1,b-1);
    return adicao(a-1,b+1);

}
int main(){
    unsigned int a,b;
    scanf("%u %u",&a,&b);
    printf("%u\n",adicao(a,b));
    return 0;
}




