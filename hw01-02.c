#include <stdio.h>

int main() {
    double r1, r2;

    printf("抵抗値を入力: r1 r2\n");
    scanf("%lf %lf", &r1, &r2);

    printf("直列(Ω): %.1lf\n", r1+r2);
    printf("並列(Ω): %.1lf\n", 1.0/(1.0/r1+1.0/r2));
    
    return 0;
}