#include<stdio.h>
#include<math.h>

typedef struct point{
	double x,y;
} POINT;

double dist(POINT p){
	double distance;
	distance=sqrt(p.x*p.x+p.y*p.y);
	return distance;
}

int main(){
	POINT d[3];
	double z,max=0.0;

	for(int i=0;i<3;i++){
		scanf("%lf %lf",&d[i].x,&d[i].y);
	}

	for(int i=0;i<3;i++){
		z=dist(d[i]);
		if(max<z){
			max=z;
		}
	}

	printf("%lf\n",max);

	return 0;
}
