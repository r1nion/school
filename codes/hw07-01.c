#include<stdio.h>
#include<math.h>

int main(){
    double d,x,y,x1,y1,x2,y2;

    printf("input x y of point 1\n");
    scanf("%lf %lf",&x1,&y1);
    printf("input x y of point 2\n");
    scanf("%lf %lf",&x2,&y2);

    x=x2-x1;
    y=y2-y1;
    d=sqrt(pow(x,2)+pow(y,2));

    printf("distance=%lf\n",d);

    return 0;
}