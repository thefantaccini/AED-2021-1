#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int qtdGols;
} tJogador;

typedef struct
{
    char nome[50];
    tJogador jogadores[50];
    int qtdJogadores;
} tTime;

tJogador criaJogador(char* nome, int qtdGols){
    tJogador a;
    for(int i=0; i<50; i++) *(a.nome+i) = *(nome+i);
    a.qtdGols = qtdGols;
    return a;
}

tTime criaTime(char* nome, int qtdJogadores){
    tTime a;
    for(int i=0; i<50; i++) *(a.nome+i) = *(nome+i);
    a.qtdJogadores = qtdJogadores;
    return a;
}

int main(){
    int N, M, gols, totalGols = 0, qtdJogadores = 0;
    char* nomeTime;
    char* nomeJogador;
    scanf("%d",&N);
    tTime* times = (tTime*) malloc(sizeof(tTime)*N);
    for(int i=0; i<N; i++){
        nomeTime = malloc(50);
        scanf("%s\n%d",nomeTime,&M);
        times[i] = criaTime(nomeTime, M);
        for(int j=0; j<M; j++){
            scanf("%s %d",nomeJogador,&gols);
            times[i].jogadores[j] = criaJogador(nomeJogador, gols);
            printf("criei o cria\n");
            totalGols+=gols;
        }
        qtdJogadores+=M;
        free(nomeTime);
    }

    for(int i=0; i<N; i++)
        for(int j=0; j<times[i].qtdJogadores; j++)
            if(times[i].jogadores[j].qtdGols >= (totalGols/qtdJogadores)) printf("[%s] %s\n",times[i].nome,times[i].jogadores[j].nome);
    free(times);
    return 0;
}