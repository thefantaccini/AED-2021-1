#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[100];
    unsigned long long int matricula;
    int media;

} tAluno;

int calculaMedia(int* notas, int n){
    int soma = 0;
    for(int i = 0; i < n; i ++) soma+=*(notas+i);
    return (soma/n);
}

void setAluno(tAluno* a, char* nome, unsigned long long int matricula, int K, int* notas){
    for(int i=0; i<100; i++) *(a->nome+i) = *(nome+i);
    a->matricula = matricula;
    a->media = calculaMedia(notas,K);
}

int main(){
    int N, K, M;
    unsigned long long int  matricula = 0;
    char* nome;
    int* notas;
    //Lê a qtd de alunos e aloca a turma
    scanf("%d",&N);
    tAluno* turma = malloc(sizeof(tAluno)*N);

    for(int i=0; i<N; i++){

        nome = malloc(100);
        scanf("%s",nome);
        scanf("%llu",&matricula);
        scanf("%d",&K);
        notas = malloc(K*sizeof(int));
        for(int j=0; j<K; j++) scanf("%d",notas+j);
        setAluno(turma+i, nome, matricula, K, notas);

        free(nome);
        free(notas);

        if(i == N-1 ) scanf("%d",&M);
    }

    for(int i=0; i<N; i++)
        if((turma+i)->media >= M) printf("[%llu] %s\n",turma[i].matricula,turma[i].nome);

    free(turma);
    return 0;
}