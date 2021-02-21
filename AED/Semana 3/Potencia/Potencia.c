#include <stdio.h>

//Considerando que maior valor possível é 1e40, é impossível guardar nem metade deste valor, então guardarei o maior possível

unsigned long long int potencia(unsigned long long int a, int n){
  if (n == 0) return 1;
  if (n == 1) return a;
  return (a * potencia(a, n - 1));
}

int main(){
    unsigned long long int a;
    int n;
    scanf("%llu %d", &a, &n);
    printf("%llu\n",potencia(a, n));
    return 0;
}