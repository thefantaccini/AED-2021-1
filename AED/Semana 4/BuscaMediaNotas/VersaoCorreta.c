#include <stdio.h>
#include <stdlib.h>

typedef struct aluno aluno;

struct aluno{
  char nome[100];
  int matricula;
  int K;
  int notas[10];
};

aluno criaAluno(char* nome, int matricula, int K, int* notas){
    aluno a;
    for(int i=0; i<100; i++) a.nome[i] = *(nome+i);
    a.matricula = matricula;
    a.K = K;
    for(int i=0; i<K; i++) a.notas[i] = *(notas+i);
    return a;
}

int calculaMedia(int* notas, int n){
    int soma = 0;
    for(int i = 0; i < n; i ++) soma+=*(notas+i);
    return (soma/n);
}

int main(){
    char* nome;
    int N = 0, matricula = 0, K = 0, media = 0;
    int* notas;
    aluno* turma;
    //Lê a qtd de alunos e aloca a turma
    scanf("%d",&N);
    turma = malloc(N * sizeof(aluno));

    for(int i=0; i<N; i++){
        char* nome = malloc(100);
        scanf("%s",nome);
        scanf("%d",&matricula);
        scanf("%d",&K);
        int* notas = (int*) malloc(K*sizeof(int));
        for(int j=0; j<K; j++) scanf("%d",notas+j);
        turma[i] = criaAluno(nome, matricula, K, notas);
        free(notas);
        free(nome);
    }

    scanf("%d",&media);

    for(int i=0; i<N; i++){
        if(calculaMedia(turma[i].notas,turma[i].K) >= media) printf("[%d] %s\n",turma[i].matricula,turma[i].nome);
    }

    free(turma);
    return 0;
}