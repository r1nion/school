#include<stdio.h>
#include<string.h>

int main(){
    char ans[]="hello";
    char display[100];
    char input[100];

    int i=0, count=0;
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

        if(strlen(input) != len){
            printf("Error\n");
            continue;
        }

        count++;

        for(i=0; i<len; i++){
            if(input[i] == ans[i]){
                display[i] = ans[i];
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