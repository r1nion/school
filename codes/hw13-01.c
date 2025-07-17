#include<stdio.h>
typedef struct product{
	char name[30];
	int p,q;
} PRODUCT;

int main(){
	PRODUCT products[3];
	
	for(int i=0;i<3;i++){
		scanf("%s %d %d",products[i].name,&products[i].p,&products[i].q);
	}

	for(int i=0;i<3;i++){
		if(products[i].q<5){
			printf("%s %d\n",products[i].name,(5-products[i].q)*products[i].p);
		}
	}
	return 0;
}
