#include <stdio.h>

unsigned long int fatorial(int n){
  if (n <= 1) return 1;
  return n * fatorial(n - 1);
}

int main(){
    int n = 0;
    scanf("%d",&n);
    printf("%lu\n",fatorial(n));
    return 0;
}