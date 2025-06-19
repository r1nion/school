#include<stdio.h>

int isPrime(int x){
    int i=2;
    while(i<x){
        if(x%i==0) return 0;
        i++;
    }
    return 1;
}

int main(){
    int x;
    printf("数値を1つ入力\n");
    scanf("%d", &x);

    if(isPrime(x)==0){
        printf("素数ではない\n");
    }else{
        printf("素数\n");
    }

    return 0;
}