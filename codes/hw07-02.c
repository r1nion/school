#include<stdio.h>
#include<string.h>

int main(){
    char c1[100],c2[100];
    int len1,len2;

    printf("input text1\n");
    scanf("%s",c1);
    printf("input text2\n");
    scanf("%s",c2);

    len1=strlen(c1);
    len2=strlen(c2);

    if(len1>len2){
        printf("%s\n",strcat(c1,c2));
    }else{
        printf("%s\n",strcat(c2,c1));    
    }

    return 0;
}