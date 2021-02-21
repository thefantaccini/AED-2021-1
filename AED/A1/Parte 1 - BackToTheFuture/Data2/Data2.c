#include <stdio.h>
#include <stdbool.h>

bool bissexto(int ano){
  if(ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)) return true;
  return false;
}

bool verificaData(int d, int m, int a){
  if(m > 12) return false;
  if(d > 31) return false;
  if((m == 2 || m == 4 || m == 6 || m == 9 || m == 11) && d > 30) return false;
  if(m == 2 && ((bissexto(a) && d>29) || (!bissexto(a) && d>28))) return false;
  return true;
}

int main(){
    int d, m, a;
    scanf("%d %d %d", &d, &m, &a);
    if(verificaData(d, m, a)) printf("DATA VALIDA\n");
    else printf("DATA INVALIDA\n");
    return 0;
}


