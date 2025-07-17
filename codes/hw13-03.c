#include<stdio.h>

int f(int n){
	int x;

	if(n==1){
		x=52;
	}else{
		x=f(n-1)-8;
	}

	return x;
}

int main(){
	int n;

	scanf("%d",&n);
	printf("%d",f(n));

	return 0;
}
