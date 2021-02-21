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
    for(int i=0; i<100; i++) *(a.nome+i) = *(nome+i);
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
    char nome[100];
    int N, matricula, K, M;
    int notas[10];

    //Lê a qtd de alunos e aloca a turma
    scanf("%d",&N);
    aluno turma[N];

    for(int i=0; i<N; i++){
        scanf("%s\n%d\n%d",nome, &matricula, &K);
        for(int j=0; j<K; j++) scanf("%d",notas+j);
        turma[i] = criaAluno(nome, matricula, K, notas);
        if(i == N-1) scanf("%d",&M);
    }

    for(int i=0; i<N; i++)
        if(calculaMedia(turma[i].notas,turma[i].K) >= M) printf("[%d] %s\n",turma[i].matricula,turma[i].nome);

    return 0;
}