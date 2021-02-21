#include <stdio.h>
#include <stdlib.h>

typedef struct tRacional tRacional;

struct tRacional{
  int numerador;
  int denominador;
};
tRacional racional(int a, int b){
    tRacional num;
    num.numerador = a;
    num.denominador = b;
    return num;
}
tRacional negativo(tRacional num){
    num.numerador*=-1;
    return num;
}
tRacional soma(tRacional num1, tRacional num2){
    tRacional soma;
    soma.numerador=(num1.numerador*num2.denominador)+(num2.numerador*num1.denominador);
    soma.denominador=num1.denominador*num2.denominador;
    return soma;
}
tRacional mult(tRacional num1, tRacional num2){
    tRacional mult;
    mult.numerador=num1.numerador*num2.numerador;
    mult.denominador=num1.denominador*num2.denominador;
    return mult;
}
tRacional divisao(tRacional num1, tRacional num2){
    tRacional num2invertido;
    num2invertido.numerador = num2.denominador;
    num2invertido.denominador = num2.numerador;
    return mult(num1,num2invertido);
}

int mdc(int a, int b) { // Baseado em http://devfuria.com.br/logica-de-programacao/mdc/
    int r;
    do {
        r = a % b;
        a = b;
        b = r;
    } while (r != 0);
    if(a<0) a*=-1;
    return a;
}

tRacional reduz(tRacional num){
    int c = mdc(num.numerador,num.denominador);
    num.numerador = num.numerador/c;
    num.denominador = num.denominador/c;
    return num;
}


int main(){
    int n1, d1, n2, d2;
    char op;
    while ( scanf("%d %d %c %d %d",&n1,&d1,&op,&n2,&d2) != EOF){
        tRacional num1 = racional(n1,d1);
        tRacional num2 = racional(n2,d2);
        tRacional resultado;
        if(op == '+') resultado = reduz(soma(num1,num2));
        else if(op == '-') resultado = reduz(soma(num1,negativo(num2)));
        else if(op == '*') resultado = reduz(mult(num1,num2));
        else if(op == '/') resultado = reduz(divisao(num1,num2));
        printf("%d %d\n",resultado.numerador,resultado.denominador);
    }

    return 0;
}