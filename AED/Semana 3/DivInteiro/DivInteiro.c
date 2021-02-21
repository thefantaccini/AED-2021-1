#include <stdio.h>
#include <math.h>

int div(int a, int b){
  if (a%b == 0) return a/b;
  return div(a-1,b);
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n",div(a,b));
    return 0;
}