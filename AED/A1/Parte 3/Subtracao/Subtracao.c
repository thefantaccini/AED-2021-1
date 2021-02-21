#include <stdio.h>
#include <stdlib.h>

unsigned int subtracao(unsigned int a,unsigned int b){
    if(b == 0) return a;
    return subtracao(a-1,b-1);

}
int main(){
    unsigned int a,b;
    scanf("%u %u",&a,&b);
    printf("%u\n",subtracao(a,b));
    return 0;
}




