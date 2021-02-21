#include <stdio.h>
#include <stdbool.h>

bool bissexto(int ano){
  if(ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)) return true;
  return false;
}
void diaSeguinte(int* d, int* m, int* a){
    //Vetor de dias finais possíveis
    int diaFinal[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    //Deixando o dia bissexto como exceção
    if(*m == 2 && bissexto(*a) && *d > 27){
        if(*d == 29){
            *d = 1;
            *m = 3;
        }else if(*d == 28){ //Impede que ele vire o mês sem ser o dia 28
            *d = 29;
        }
    }else{
        //Verifica se é o último dia do mês
        if(*d == diaFinal[*m - 1]){
            //Verifica se é o último dia do ano
            *d = 1;
            if(*m == 12){
                *m = 1;
                *a = *a + 1;
            }else *m = *m + 1;
        }else *d = *d + 1;
    }
}
int main(){
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);
    int* pDia = &dia;
    int* pMes = &mes;
    int* pAno = &ano;
    diaSeguinte(pDia,pMes,pAno);
    printf("%d %d %d\n", dia, mes, ano);

    //Teste de ano
    /*for(int i = 0; i < 365; i++){
        diaSeguinte(pDia,pMes,pAno);
        printf("%d %d %d\n", dia, mes, ano);
    }*/

    return 0;
}