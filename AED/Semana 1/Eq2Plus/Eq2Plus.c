#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d;
    scanf("%f %f %f", &a, &b, &c);
    d = (b*b)-(4*a*c);
    if(d == 0) printf("%.4f", (b/(-2*a)));
    else if(d > 0) printf("%.4f %.4f", ((sqrt(d) - b)/(2*a)), ((sqrt(d) + b)/(-2*a)));
    else printf("nao ha raiz real");
    printf("\n");

    return 0;
}