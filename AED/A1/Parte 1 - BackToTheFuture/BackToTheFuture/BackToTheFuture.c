#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

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
    int dia = 0, mes = 0, ano = 0, n = 0, k = 0;
    scanf("%d", &n);
    int *pDia = &dia;
    int *pMes = &mes;
    int *pAno = &ano;
    char *pComandos;
    for(int i=0; i<n; i++){ // Roda todos casos de teste

        scanf("%d %d %d", pDia, pMes, pAno);
        /*diaSeguinte(pDia,pMes,pAno);
        printf("Dia seguinte = %d %d %d", dia, mes, ano);
        diaAnterior(pDia,pMes,pAno);
        diaAnterior(pDia,pMes,pAno);
        printf("\nDia Anterior = %d %d %d\n", dia, mes, ano);
        */

        scanf("%d", &k);
        pComandos = (char*)malloc (k * sizeof(char));
        for(int j=0; j<k; j++) scanf(" %c",pComandos+j);
        for(int l=0; l<k; l++){ // Aplica os comandos
            if(pComandos[l] == '<') diaAnterior(pDia,pMes,pAno);
            else diaSeguinte(pDia,pMes,pAno);
        }
        printf("%d/%d/%d\n", dia, mes, ano); // Imprime o resultado
        free(pComandos);
    }

    return 0;
}