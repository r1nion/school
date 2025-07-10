#include<stdio.h>

void swap(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int main(){
    int n[6],i,j;
    
    for(i=0;i<6;i++)
        scanf("%d",&n[i]);

    for(i=5;i>0;i--) {
        for(j=0;j<i;j++) {
            if(n[j]>n[j+1]){
                swap(&n[j],&n[j+1]);
            }
        }
    }

    for(i=0;i<6;i++)
        printf("%d ",n[i]);

    printf("\n");
    
    return 0;
}