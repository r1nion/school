#include<stdio.h>

int max_search(int score[6]){
	int max=score[0],i;
	for(i=1;i<6;i++){
		if(score[i]>max){
			max=score[i];
		}
	}
	return max;
}

int main(){
	int score[6],i,max;
	for(i=0;i<6;i++){
		scanf("%d",&score[i]);
	}

	max=max_search(score);
	printf("max: %d\n",max);
	
	return 0;
}
