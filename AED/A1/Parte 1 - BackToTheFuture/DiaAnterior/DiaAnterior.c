#include <stdio.h>
#include <stdbool.h>

bool bissexto(int ano){
  if(ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)) return true;
  return false;
}
void diaAnterior(int* d, int* m, int* a){
    //CALCULANDO O DIA
    if(*d == 1){
        if((*m == 1 || *m == 2 || *m == 4 || *m == 6 || *m == 8 || *m == 9 || *m == 11)) *d = 31; //o mes anterior tem 31 dias?
        else if(*m == 3 && bissexto(*a)) *d = 29;
        else if(*m == 3 && !bissexto(*a)) *d = 28;
        else *d = 30;
        //CALCULANDO O MES E O ANO
        if(*m == 1){
          *m = 12;
          *a = *a-1;
        }
        else *m = *m - 1;
    }else *d = *d - 1;
}
int main(){
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);
    int* pDia = &dia;
    int* pMes = &mes;
    int* pAno = &ano;
    diaAnterior(pDia,pMes,pAno);
    printf("%d %d %d\n", dia, mes, ano);
    return 0;
}


