#include<stdio.h>

int main(){
    int num[6],a;

    printf("input 6 numbers\n");
    scanf("%d %d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4],&num[5]);

    for(int i=0;i<5;i++){
        int min=i;
        for(int j=i+1;j<6;j++){
            if(num[j]<num[min]){
                min=j;
            }
        }
        if(min!=i){
            a=num[i];
            num[i]=num[min];
            num[min]=a;
        }
    }

    printf("result: ");
    
    for(int i=0;i<6;i++){
        printf("%d ",num[i]);
    }

    printf("\n");
    
    return 0;
}