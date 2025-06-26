#include<stdio.h>
#include<string.h>

void password_check(char moji[100]){
	int result=0,isCaps=0,isSmall=0,isNum=0,isSymbol=0;
	int len=strlen(moji);

	if(len>=8){
		for(int i=0;moji[i]!='\0';i++){
			char c=moji[i];
			if('A'<=c&&c<='Z'){
				isCaps=1;
			}else if('a'<=c&&c<='z'){
				isSmall=1;
			}else if('0'<=c&&c<='9'){
				isNum=1;
			}else{
				isSymbol=1;
			}
		}
		if(isCaps&&isSmall&&isNum&&isSymbol){
			printf("OK");
		}else{
			printf("NG");
		}
	}
	else{
		printf("NG");
	}
}

int main(){
	char moji[100];
	int isPass=0;
	scanf("%s",moji);

	password_check(moji);
	return 0;
}
