#include<stdio.h>
int main(){
    int x,y,result;
    printf("input 2 values\n");
    scanf("%d %d",&x,&y);

    if(x>y){
        result=x-y;
    }else if(y>=x){
        result=y-x;
    }

    printf("|x-y|=%d\n",result);

    return 0;
}