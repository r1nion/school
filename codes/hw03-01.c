#include <stdio.h>

int main() {
    int a, i, isPrime=1;

    printf("input a value\n");
    scanf("%d", &a);

    if (a<2){
        isPrime=0;
    }

    for (i=2; i*i<=a; i++) {
        if (a%i==0) {
            isPrime=0;
            break;
        }
    }

    if (isPrime){
        printf("素数\n");
    }else{
        printf("素数ではない\n");
    }
    
    return 0;
}