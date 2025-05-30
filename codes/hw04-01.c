#include<stdio.h>

int main(){
    int d,i;
    int b[14];

    printf("input int 0 to 9999\n");
    scanf("%d",&d);

    while(d>0){
        b[i++]=d%2;
        d/=2;
    }

    if(i==0){
        b[i++]=0;
    }

    printf("result:");

    for(int j=i-1;j>=0;j--){
        printf("%d",b[j]);
    }

    printf("\n");

    return 0;

}