#include <stdio.h>

void bissexto(short int ano){
  if(ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)) printf("ANO BISSEXTO\n");
  else printf("ANO NAO BISSEXTO\n");
}

int main(){
    short int ano;
    scanf("%hd", &ano);
    bissexto(ano);
    return 0;
}