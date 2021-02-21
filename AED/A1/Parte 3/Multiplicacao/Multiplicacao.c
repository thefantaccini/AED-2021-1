#include <stdio.h>
#include <stdlib.h>

//Mais uma vez, o exercício abre possibilidades que não são aceitas em nenhuma variável
unsigned long long int mult(unsigned int a,unsigned int b){
    if(a == 0) return 0;
    return b + mult(a-1,b);

}
int main(){
    unsigned int a,b;
    scanf("%u %u",&a,&b);
    printf("%llu\n",mult(a,b));
    return 0;
}