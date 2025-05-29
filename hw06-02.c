#include<stdio.h>

int main(){
    int i=0;
    char c[100];
    
    printf("input text: ");
    scanf("%s",c);
    
    while (c[i]!='\0'){
        i++;
    }
    
    i--;
    
    printf("result: ");
    
    while(i>=0){
        printf("%c",c[i]);
        i--;
    }
    
    printf("\n");
    return 0;
}