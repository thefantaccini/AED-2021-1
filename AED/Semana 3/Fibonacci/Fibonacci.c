#include <stdio.h>
#include <math.h>

unsigned int fibonacci(int n){
  if (n == 1) return 0;
  if (n < 4) return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n = 0;
    scanf("%d",&n);
    printf("%u\n",fibonacci(n));
    return 0;
}