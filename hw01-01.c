#include<stdio.h>
int main(){
    int eng,phys,math,sum,ave;

    printf("点数を入力: 英語 物理 数学\n");
    scanf("%d %d %d",&eng,&phys,&math);

    sum=eng+phys+math;
    ave=sum/3;
    
    printf("sum: %d\n",sum);
    printf("average: %d\n",ave);
    
    return 0; 
}