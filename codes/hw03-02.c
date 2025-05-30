#include <stdio.h>

int main() {
    int a, i, j;

    printf("input a value\n");
    scanf("%d", &a);

    int prime[a+1];

    for (i=0; i<=a; i++){
        prime[i]=1;
    }

    prime[0]=prime[1]=0;

    for (i=2; i*i<=a; i++) {
        if (prime[i]){
            for (j=i*i; j<=a; j+=i){
                prime[j]=0;
            }
        }
    }

    for (i=2; i<=a; i++) {
        if (prime[i]){
            printf("%d\n", i);
        }
    }

    return 0;
}