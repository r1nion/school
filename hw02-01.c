#include<stdio.h>
int main(){
    int eng,phys,math,sum,ave;
    char result;

    printf("点数を入力: 英語 物理 数学\n");
    scanf("%d %d %d",&eng,&phys,&math);

    sum=eng+phys+math;
    ave=sum/3;
    
    if(ave<=59){
        result='D';
    }else if(ave<=69){
        result='C';
    }else if(ave<=79){
        result='B';
    }else{
        result='A';
    }

    printf("%c\n",result);
    
    return 0; 
}

