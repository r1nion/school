#include<stdio.h>
int main(){
    int eng,phys,math,sum,ave;

    printf("点数を入力: 英語 物理 数学\n");
    scanf("%d %d %d",&eng,&phys,&math);

    sum=eng+phys+math;
    ave=sum/3;
    
    if(ave<=59){
	    printf("D");
    }else if(ave<=69){
	    printf("C");
    }else if(ave<=79){
	    printf("B");
    }else{
	    printf("A");
    }
    
    return 0; 
}

