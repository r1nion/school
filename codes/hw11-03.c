#include<stdio.h>

int main(){
    char m[100]="aPpLe";
    char *p=m;

    while(*p!='\0') {
        if(*p>='A' && *p<='Z')
            *p += 32;
        else if(*p>='a' && *p<='z')
            *p -= 32;
        p++;
    }

    printf("%s\n", m);
    return 0;
}