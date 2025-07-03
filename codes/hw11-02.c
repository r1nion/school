#include<stdio.h>

int main(){
    char moji;
    char *p;

    scanf("%c",&moji);

    p = &moji;

    if(*p>='A' && *p<='Z')
        *p += 32;
    else if(*p>='a' && *p<='z')
        *p -= 32;

    printf("%c\n", *p);
    return 0;
}