#include<stdio.h>

int main() {
    char c;

    printf("input a character: ");
    scanf("%c",&c);

    if (c>='A'&&c<='Z'){
        c+=32;
    }else if(c>='a'&&c<='z'){
        c-=32;
    }

    printf("result: %c\n",c);

    return 0;
}