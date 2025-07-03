#include<stdio.h>

int main(){
    double x,result=1.0;
    double *px;
    int y,i;
    int *py;

    scanf("%lf %d",&x,&y);

    px=&x;
    py=&y;

    for(i=0;i<*py;i++){
        result*= *px;
    }
    printf("%lf\n",result);
    return 0;
}