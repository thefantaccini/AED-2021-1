#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct tComplex tComplex;

struct tComplex{
  int a;
  int b;
};

tComplex complexo(int x, int y){
  tComplex num;
  num.a = x;
  num.b = y;
  return num;
}
tComplex soma(tComplex num1, tComplex num2){
  tComplex soma;
  soma.a = num1.a + num2.a;
  soma.b = num1.b + num2.b;
  return soma;
}
tComplex sub(tComplex num1, tComplex num2){
  tComplex sub;
  sub.a = num1.a - num2.a;
  sub.b = num1.b - num2.b;
  return sub;
}
tComplex mult(tComplex num1, tComplex num2){
  tComplex mult;
  int a = num1.a;
  int b = num1.b;
  int c = num2.a;
  int d = num2.b; //(a + bi) . (c + di) = (ac – bd) + i (ad + bc)
  mult.a = (a*c) - (b*d);
  mult.b = (a*d) + (b*c);
  return mult;
}
tComplex divisao(tComplex num1, tComplex num2){
  tComplex divisao;
  double a = (double) num1.a;
  double b = (double) num1.b;
  double c = (double) num2.a;
  double d = (double) num2.b; //(a + bi) . (c + di) = (ac – bd) + i (ad + bc)

  /*printf("a*c =       %.1f\n",a*c);
  printf("b*d =       %.1f\n",b*d);
  printf("a*c + b*d = %.1f\n",(a*c + b*d));
  printf("c² =       %.1f\n",c*c);
  printf("d² =       %.1f\n",d*d);
  printf("c² - d² = %.1f\n",(c*c + d*d));*/


  divisao.a = (int) (a*c + b*d) / (c*c + d*d);
  divisao.b = (int) (b*c - a*d) / (c*c + d*d);
  return divisao;
}


int main(){
 int n1, d1, n2, d2;
 char aux;
 char op;
 while ( scanf("%d %d %c %c %d %d %c",&n1,&d1,&aux,&op,&n2,&d2, &aux) != EOF ){
     tComplex num1 = complexo(n1,d1);
     tComplex num2 = complexo(n2,d2);
     tComplex resultado;
     if(op == '+') resultado = soma(num1,num2);
     else if(op == '-') resultado = sub(num1,num2);
     else if(op == '*') resultado = mult(num1,num2);
     else if(op == '/') resultado = divisao(num1,num2);
     if(resultado.b>-1) printf("%d +%di\n",resultado.a,resultado.b);
     else printf("%d %di\n",resultado.a,resultado.b);
  }

  return 0;
}