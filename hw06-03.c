#include<stdio.h>
#include<string.h>

int main(){
    char ans[]="hello";
    char display[100];
    char input[100];

    int i=0, j=0, count=0;
    int len=strlen(ans);
    for(i=0; i<len; i++){
        display[i]='*';
    }
    display[len]='\0';

    printf("Guess a word: ");
    while(1){
        printf("%s\n", display);
        printf("input: ");
        scanf("%s", input);
        count++;
        for(i=0; i<len; i++){
            for(j=0; input[j]!='\0'; j++){
                if(input[j]==ans[i]){
                    display[i]=ans[i];
                    break;
                }
            }
        }
        if(strcmp(display, ans)==0){
            break;
        }
    }
    printf("\ncongratulations!\n");
    printf("%s\n", display);
    printf("Count: %d\n", count);
    return 0;
}